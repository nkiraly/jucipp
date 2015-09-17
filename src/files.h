#include <string>

#define JUCI_VERSION "0.9.2"

const std::string configjson =
"{\n"
"    \"version\": \""+std::string(JUCI_VERSION)+"\",\n"
"    \"gtk_theme\": {\n"
"        \"name\": \"Adwaita\", //Use \"\" for default theme, At least these two exist on all systems: Adwaita, Raleigh\n"
"        \"variant\": \"\" //Use \"\" for default variant, and \"dark\" for dark theme variant\n"
"    },\n"
"    \"source\": {\n"
"        \"style\": \"juci-light\", //Use \"\" for default style, and for instance juci-dark together with dark gtk_theme variant. Styles from normal gtksourceview install: classic, cobalt, kate, oblivion, solarized-dark, solarized-light, tango\n"
#ifdef __APPLE__
"        \"font\": \"Menlo 11\", "
#else
#ifdef _WIN32
"        \"font\": \"Consolas\", "
#else
"        \"font\": \"Monospace\", "
#endif
#endif
"//Use \"\" for default font, and for instance \"Monospace 12\" to also set size.\n"
"        \"spellcheck_language\": \"en_US\", //Use \"\" to set language from your locale settings\n"
"        \"clang_types\": {\n"
"            \"8\": \"def:function\",\n"
"            \"21\": \"def:function\",\n"
"            \"22\": \"def:identifier\",\n"
"            \"24\": \"def:function\",\n"
"            \"25\": \"def:function\",\n"
"            \"43\": \"def:type\",\n"
"            \"44\": \"def:type\",\n"
"            \"45\": \"def:type\",\n"
"            \"46\": \"def:identifier\",\n"
"            \"109\": \"def:string\",\n"
"            \"702\": \"def:statement\",\n"
"            \"705\": \"def:comment\"\n"
"        },\n"
"        \"auto_tab_char_and_size\": true, //Use false to always use default tab char and size\n"
"        \"default_tab_char\": \" \", //Use \"\\t\" for regular tab\n"
"        \"default_tab_size\": 2,\n"
"        \"wrap_lines\": false,\n"
"        \"highlight_current_line\": true,\n"
"        \"show_line_numbers\": true\n"
"    },\n"
"    \"keybindings\": {\n"
"        \"new_file\": \"<primary>n\",\n"
"        \"new_folder\": \"<primary><shift>n\",\n"
"        \"open_folder\": \"<primary><shift>o\",\n"
"        \"open_file\": \"<primary>o\",\n"
"        \"save\": \"<primary>s\",\n"
"        \"save_as\": \"<primary><shift>s\",\n"
"        \"preferences\": \"<primary>comma\",\n"
"        \"quit\": \"<primary>q\",\n"
"        \"split_window\": \"<primary><alt>s\",\n"
"        \"close_tab\": \"<primary>w\",\n"
"        \"edit_copy\": \"<primary>c\",\n"
"        \"edit_cut\": \"<primary>x\",\n"
"        \"edit_paste\": \"<primary>v\",\n"
"        \"edit_undo\": \"<primary>z\",\n"
"        \"edit_redo\": \"<primary><shift>z\",\n"
"        \"edit_find\": \"<primary>f\",\n"
"        \"source_goto_line\": \"<primary>g\",\n"
"        \"source_center_cursor\": \"<primary>l\",\n"
"        \"source_cycle_diagnostics\": \"<primary>e\",\n"
"        \"source_goto_declaration\": \"<primary>d\",\n"
"        \"source_goto_method\": \"<primary>m\",\n"
"        \"source_rename\": \"<primary>r\",\n"
"        \"compile_and_run\": \"<primary>Return\",\n"
"        \"compile\": \"<primary><shift>Return\",\n"
"        \"run_command\": \"<alt>Return\",\n"
"        \"kill_last_running\": \"<primary>Escape\",\n"
"        \"force_kill_last_running\": \"<primary><shift>Escape\"\n"
"    },\n"
"    \"project\": {\n"
#ifdef _WIN32
"        \"cmake_command\": \"cmake -G\\\"MSYS Makefiles\\\"\",\n"
#else
"        \"cmake_command\": \"cmake\",\n"
#endif
"        \"make_command\": \"make\"\n"
"    },\n"
"    \"directoryfilter\": {\n"
"        \"ignore\": [\n"
"        ],\n"
"        \"exceptions\": [\n"
"        ]\n"
"    }\n"
"}\n";

const std::string juci_light_style =
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"\n"
"<style-scheme id=\"juci-light\" _name=\"juci\" version=\"1.0\">\n"
"  <author>juCi++ team</author>\n"
"  <_description>Default juCi++ style</_description>\n"
"\n"
"  <!-- Palette -->\n"
"  <color name=\"white\"                       value=\"#FFFFFF\"/>\n"
"  <color name=\"black\"                       value=\"#000000\"/>\n"
"  <color name=\"gray\"                        value=\"#888888\"/>\n"
"  <color name=\"red\"                         value=\"#CC0000\"/>\n"
"  <color name=\"green\"                       value=\"#008800\"/>\n"
"  <color name=\"blue\"                        value=\"#0000FF\"/>\n"
"  <color name=\"dark-blue\"                   value=\"#002299\"/>\n"
"  <color name=\"yellow\"                      value=\"#FFFF00\"/>\n"
"  <color name=\"orange\"                      value=\"#EE7700\"/>\n"
"  <color name=\"purple\"                      value=\"#990099\"/>\n"
"\n"
"  <style name=\"text\"                        foreground=\"#000000\" background=\"#FFFFFF\"/>\n"
"  <style name=\"selection\"                   background=\"#4A90D9\"/>\n"
"\n"
"  <!-- Current Line Highlighting -->\n"
"  <style name=\"current-line\"                background=\"#EEEEEE\"/>\n"
"\n"
"  <!-- Bracket Matching -->\n"
"  <style name=\"bracket-match\"               foreground=\"white\" background=\"gray\" bold=\"true\"/>\n"
"  <style name=\"bracket-mismatch\"            foreground=\"white\" background=\"#FF0000\" bold=\"true\"/>\n"
"\n"
"  <!-- Search Matching -->\n"
"  <style name=\"search-match\"                background=\"yellow\"/>\n"
"\n"
"  <!-- Language specifics -->\n"
"  <style name=\"def:builtin\"                 foreground=\"blue\"/>\n"
"  <style name=\"def:constant\"                foreground=\"blue\"/>\n"
"  <style name=\"def:boolean\"                 foreground=\"red\"/>\n"
"  <style name=\"def:decimal\"                 foreground=\"red\"/>\n"
"  <style name=\"def:base-n-integer\"          foreground=\"red\"/>\n"
"  <style name=\"def:floating-point\"          foreground=\"red\"/>\n"
"  <style name=\"def:complex\"                 foreground=\"red\"/>\n"
"  <style name=\"def:character\"               foreground=\"red\"/>\n"
"  <style name=\"def:special-char\"            foreground=\"red\"/>\n"
"\n\n"
"  <!-- Language specifics used by clang-parser in default config -->\n"
"  <style name=\"def:string\"                  foreground=\"red\"/>\n"
"  <style name=\"def:comment\"                 foreground=\"gray\"/>\n"
"  <style name=\"def:statement\"               foreground=\"blue\"/>\n"
"  <style name=\"def:type\"                    foreground=\"blue\"/>\n"
"  <style name=\"def:function\"                foreground=\"dark-blue\"/>\n"
"  <style name=\"def:identifier\"              foreground=\"purple\"/>\n"
"  <style name=\"def:preprocessor\"            foreground=\"green\"/>\n"
"  <style name=\"def:error\"                   foreground=\"red\"/>\n"
"  <style name=\"def:warning\"                 foreground=\"orange\"/>\n"
"  <style name=\"def:note\"                    foreground=\"black\" background=\"yellow\"/>\n"
"\n"
"</style-scheme>\n";

const std::string juci_dark_style =
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"\n"
"<style-scheme id=\"juci-dark\" _name=\"juci\" version=\"1.0\">\n"
"  <author>juCi++ team</author>\n"
"  <_description>Default juCi++ style</_description>\n"
"\n"
"  <!-- Palette -->\n"
"  <color name=\"white\"                       value=\"#CCCCCC\"/>\n"
"  <color name=\"black\"                       value=\"#292929\"/>\n"
"  <color name=\"gray\"                        value=\"#888888\"/>\n"
"  <color name=\"red\"                         value=\"#FF9999\"/>\n"
"  <color name=\"green\"                       value=\"#AACC99\"/>\n"
"  <color name=\"blue\"                        value=\"#9090FF\"/>\n"
"  <color name=\"light-blue\"                  value=\"#AAAAFF\"/>\n"
"  <color name=\"purple\"                      value=\"#DD88DD\"/>\n"
"\n"
"  <style name=\"text\"                        foreground=\"white\" background=\"black\"/>\n"
"  <style name=\"selection\"                   background=\"#215D9C\"/>\n"
"\n"
"  <!-- Current Line Highlighting -->\n"
"  <style name=\"current-line\"                background=\"#333333\"/>\n"
"\n"
"  <!-- Bracket Matching -->\n"
"  <style name=\"bracket-match\"               foreground=\"black\" background=\"gray\" bold=\"true\"/>\n"
"  <style name=\"bracket-mismatch\"            foreground=\"black\" background=\"#FF0000\" bold=\"true\"/>\n"
"\n"
"  <!-- Search Matching -->\n"
"  <style name=\"search-match\"                background=\"#555555\"/>\n"
"\n"
"  <!-- Language specifics -->\n"
"  <style name=\"def:builtin\"                 foreground=\"blue\"/>\n"
"  <style name=\"def:constant\"                foreground=\"blue\"/>\n"
"  <style name=\"def:boolean\"                 foreground=\"red\"/>\n"
"  <style name=\"def:decimal\"                 foreground=\"red\"/>\n"
"  <style name=\"def:base-n-integer\"          foreground=\"red\"/>\n"
"  <style name=\"def:floating-point\"          foreground=\"red\"/>\n"
"  <style name=\"def:complex\"                 foreground=\"red\"/>\n"
"  <style name=\"def:character\"               foreground=\"red\"/>\n"
"  <style name=\"def:special-char\"            foreground=\"red\"/>\n"
"\n\n"
"  <!-- Language specifics used by clang-parser in default config -->\n"
"  <style name=\"def:string\"                  foreground=\"red\"/>\n"
"  <style name=\"def:comment\"                 foreground=\"gray\"/>\n"
"  <style name=\"def:statement\"               foreground=\"blue\"/>\n"
"  <style name=\"def:type\"                    foreground=\"blue\"/>\n"
"  <style name=\"def:function\"                foreground=\"light-blue\"/>\n"
"  <style name=\"def:identifier\"              foreground=\"purple\"/>\n"
"  <style name=\"def:preprocessor\"            foreground=\"green\"/>\n"
"  <style name=\"def:error\"                   foreground=\"#FF6666\"/>\n"
"  <style name=\"def:warning\"                 foreground=\"#FFE100\"/>\n"
"  <style name=\"def:note\"                    foreground=\"white\" background=\"#444444\"/>\n"
"\n"
"</style-scheme>\n";

const std::string pluginspy =
"#!/usr/bin/python \n"
"import juci_to_python_api as juci \n"
"import glob \n"
"\n"
"def loadplugins(): \n"
"    plugin_files = glob.glob(\"../plugins/*.py\") \n"
"    for current_file in plugin_files: \n"
"        juci.initPlugin(current_file) \n"
"loadplugins() \n";

const std::string snippetpy =
"#!/usr/bin/python \n"
"#snippet plugin \n"
"import juci_to_python_api as juci, inspect \n"
" \n"
"def initPlugin(): \n"
"    juci.addMenuElement(\"Snippet\") \n"
"    juci.addSubMenuElement(\"SnippetMenu\", #name of parent menu \n"
"                           \"Insert snippet\", #menu description \n"
"                           \"insertSnippet()\", #function to execute \n"
"                           inspect.getfile(inspect.currentframe()), #plugin path \n"
"                           \"<control><alt>space\") \n"
"snippets = {} \n"
" \n"
"snippets[\"for\"] = \"\"\"\\\n"
"for(int i=0; i<v.size(); i++) { \n"
"  // std::cout << v[i] << std::endl; \n"
"  // Write code here \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"if\"] = \"\"\"\\\n"
"if(true) { \n"
"    // Write code here \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"ifelse\"] = \"\"\"\\\n"
"if(false) { \n"
"    // Write code here \n"
"} else { \n"
"    // Write code here \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"while\"] = \"\"\"\\\n"
"while(condition) { \n"
"    // Write code here \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"main\"] = \"\"\"\\\n"
"int main(int argc, char *argv[]) { \n"
"    //Do something \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"hello\"] = \"\"\"\\\n"
"#include <iostream> \n"
" \n"
"int main(int argc, char *argv[]) { \n"
"    std::cout << \"Hello, world! << std::endl; \n"
"} \n"
"\"\"\" \n"
" \n"
"def getSnippet(word):     \n"
"    try: \n"
"        output = snippets[word] \n"
"    except KeyError: \n"
"        output = word \n"
"    return output \n"
" \n"
"def insertSnippet(): \n"
"    theWord=juci.getWord() \n"
"    output=getSnippet(theWord) \n"
"    juci.replaceWord(output) \n";


