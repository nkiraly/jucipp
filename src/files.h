#include <string>
const std::string configjson =
"{\n"
"    \"source\": {\n"
"        \"colors\": {\n"
"            \"text_color\": \"black\",\n"
"            \"string\": \"#CC0000\",\n"
"            \"namespace_ref\": \"#990099\",\n"
"            \"type\": \"#0066FF\",\n"
"            \"keyword\": \"blue\",\n"
"            \"comment\": \"grey\",\n"
"            \"own\": \"pink\",\n"
"            \"diagnostic_warning\": \"orange\",\n"
"            \"diagnostic_error\": \"red\"\n"
"        },\n"
"        \"syntax\": {\n"
"            \"43\": \"type\",\n"
"            \"46\": \"namespace_ref\",\n"
"            \"109\": \"string\",\n"
"            \"702\": \"keyword\",\n"
"            \"703\": \"own\",\n"
"            \"705\": \"comment\"\n"
"        },\n"
"        \"extensions\": [\n"
"            \"c\",\n"
"            \"cc\",\n"
"            \"cpp\",\n"
"            \"cxx\",\n"
"            \"c++\",\n"
"            \"h\",\n"
"            \"hh\",\n"
"            \"hpp\",\n"
"            \"hxx\",\n"
"            \"h++\"\n"
"        ],\n"
"        \"visual\": {\n"
"            \"background\": \"white\",\n"
"            \"background_selected\": \"blue\",\n"
"            \"background_tooltips\": \"yellow\",\n"
"            \"font\": \"Monospace\",\n"
"            \"show_line_numbers\": 1,\n"
"            \"highlight_current_line\": 1\n"
"        },\n"
"        \"tab_size\": 2,\n"
"        \"tab_char\": \"<space>\"\n"
"    },\n"
"    \"keybindings\": {\n"
"        \"new_file\": \"<primary>n\",\n"
"        \"open_folder\": \"<primary><alt>o\",\n"
"        \"open_file\": \"<primary>o\",\n"
"        \"save\": \"<primary>s\",\n"
"        \"save_as\": \"<primary><shift>s\",\n"
"        \"quit\": \"<primary>q\",\n"
"        \"split_window\": \"<primary><alt>s\",\n"
"        \"close_tab\": \"<primary>w\",\n"
"        \"edit_copy\": \"<primary>c\",\n"
"        \"edit_cut\": \"<primary>x\",\n"
"        \"edit_paste\": \"<primary>v\",\n"
"        \"edit_undo\": \"<primary>z\",\n"
"        \"edit_redo\": \"<primary><shift>z\",\n"
"        \"edit_find\": \"<primary>f\",\n"
"        \"source_goto_declaration\": \"<primary>d\",\n"
"        \"source_goto_method\": \"<primary>m\",\n"
"        \"source_rename\": \"<primary>r\",\n"
"        \"compile_and_run\": \"<primary>Return\",\n"
"        \"compile\": \"<primary><shift>Return\"\n"
"    },\n"
"    \"directoryfilter\": {\n"
"        \"ignore\": [\n"
"            \"cmake\",\n"
"            \"#\",\n"
"            \"~\",\n"
"            \".idea\",\n"
"            \".so\",\n"
"            \"in-lowercase.pls\"\n"
"        ],\n"
"        \"exceptions\": [\n"
"            \"cmakelists.txt\",\n"
"            \"in-lowercase.pls\"\n"
"        ]\n"
"    },\n"
"    \"project\": {\n"
"        \"run_commands\": [\n"
"            \"./.build/\"\n"
"        ],\n"
"        \"compile_commands\": [\n"
"            \"rm -rf ./.build\",\n"
"            \"mkdir ./.build\",\n"
"            \"cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -B./.build -H.\",\n"
"            \"cd ./.build/; make\",\n"
"            \"cp ./.build/compile_commands.json compile_commands.json\"\n"
"        ]\n"
"    },\n"
"    \"example\": {\n"
"        \"key\": \"value\",\n"
"        \"key2\": [\n"
"            \"val1\",\n"
"            \"val2\",\n"
"            3\n"
"        ],\n"
"        \"key3\": \"value\"\n"
"    }\n"
"}\n";

const std::string menuxml =
"<ui>\n"
"  <menubar name=\"MenuBar\">\n"
"    <menu action=\"FileMenu\">\n"
"      <menuitem action=\"FileNewFile\"/>\n"
"      <menuitem action=\"FileOpenFile\"/>\n"
"      <menuitem action=\"FileOpenFolder\"/>\n"
"      <menuitem action=\"FileSave\"/>\n"
"      <menuitem action=\"FileSaveAs\"/>\n"
"      <separator/>\n"
"      <menuitem action=\"FileQuit\"/>\n"
"    </menu>\n"
"    <menu action=\"EditMenu\">\n"
"      <menuitem action=\"EditCopy\"/>\n"
"      <menuitem action=\"EditCut\"/>\n"
"      <menuitem action=\"EditPaste\"/>\n"
"      <separator/>\n"
"      <menuitem action=\"EditFind\"/>\n"
"      <menuitem action=\"EditUndo\"/>\n"
"      <menuitem action=\"EditRedo\"/>\n"
"    </menu>\n"
"    <menu action=\"SourceMenu\">\n"
"      <menuitem action=\"SourceGotoDeclaration\"/>\n"
"      <menuitem action=\"SourceGotoMethod\"/>\n"
"      <menuitem action=\"SourceRename\"/>\n"
"    </menu>\n"
"    <menu action=\"ProjectMenu\">\n"
"      <menuitem action=\"ProjectCompileAndRun\"/>\n"
"      <menuitem action=\"ProjectCompile\"/>\n"
"    </menu>\n"
"    <menu action=\"WindowMenu\">\n"
"      <menuitem action=\"WindowCloseTab\"/>\n"
"      <menuitem action=\"WindowSplitWindow\"/>\n"
"    </menu>\n"
"    <menu action=\"PluginMenu\">\n"
"    </menu>\n"
"    <menu action=\"HelpMenu\">\n"
"      <menuitem action=\"HelpAbout\"/>\n"
"    </menu>\n"
"  </menubar>\n"
"</ui>\n";

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
"snippets[\"for\"] = \"\"\"\ \n"
"for(int i=0; i<v.size(); i++) { \n"
"  // std::cout << v[i] << std::endl; \n"
"  // Write code here \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"if\"] = \"\"\"\ \n"
"if(true) { \n"
"    // Write code here \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"ifelse\"] = \"\"\"\ \n"
"if(false) { \n"
"    // Write code here \n"
"} else { \n"
"    // Write code here \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"while\"] = \"\"\"\ \n"
"while(condition) { \n"
"    // Write code here \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"main\"] = \"\"\"\ \n"
"int main(int argc, char *argv[]) { \n"
"    //Do something \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"hello\"] = \"\"\"\ \n"
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

