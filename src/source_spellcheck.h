#ifndef JUCI_SOURCE_SPELLCHECK_H_
#define JUCI_SOURCE_SPELLCHECK_H_
#include <gtksourceviewmm.h>
#include <aspell.h>
#include "selectiondialog.h"

namespace Source {
  class SpellCheckView : virtual public Gsv::View {
  public:
    SpellCheckView();
    ~SpellCheckView();
    
    virtual void configure();
    
    virtual void hide_tooltips() {}
    virtual void hide_dialogs();
    
    void spellcheck();
    void remove_spellcheck_errors();
    void goto_next_spellcheck_error();
    
  protected:
    bool is_code_iter(const Gtk::TextIter &iter);
    bool spellcheck_all=false;
    guint last_keyval=0;
  private:
    std::unique_ptr<SelectionDialog> spellcheck_suggestions_dialog;
    
    Glib::RefPtr<Gtk::TextTag> spellcheck_error_tag;
    
    Glib::RefPtr<Gtk::TextTag> comment_tag;
    Glib::RefPtr<Gtk::TextTag> string_tag;
    Glib::RefPtr<Gtk::TextTag> no_spell_check_tag;
    sigc::connection signal_tag_added_connection;
    sigc::connection signal_tag_removed_connection;
    
    static AspellConfig* spellcheck_config;
    AspellCanHaveError *spellcheck_possible_err;
    AspellSpeller *spellcheck_checker;
    bool is_word_iter(const Gtk::TextIter& iter);
    std::pair<Gtk::TextIter, Gtk::TextIter> get_word(Gtk::TextIter iter);
    void spellcheck_word(const Gtk::TextIter& start, const Gtk::TextIter& end);
    std::vector<std::string> get_spellcheck_suggestions(const Gtk::TextIter& start, const Gtk::TextIter& end);
    sigc::connection delayed_spellcheck_suggestions_connection;
    sigc::connection delayed_spellcheck_error_clear;
    
    void spellcheck(const Gtk::TextIter& start, const Gtk::TextIter& end);
  };
}

#endif //JUCI_SOURCE_SPELLCHECK_H_
