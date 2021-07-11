// generated by Fast Light User Interface Designer (fluid) version 1.0306

#ifndef mcpppp_h
#define mcpppp_h
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
extern void run(Fl_Button*, void*);
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Check_Button.H>
extern void conversion(Fl_Check_Button*, void*);
#include <FL/Fl_Scroll.H>
extern void browse(Fl_Button*, void*);
extern void reload(Fl_Button*, void*);
#include <FL/Fl_Input.H>
extern void editpath(Fl_Input*, void*);
extern void opensettings(Fl_Button*, void*);
extern void openhelp(Fl_Button*, void*);
#include <FL/Fl_Box.H>
extern void addrespath(Fl_Button*, void*);
extern void deleterespath(Fl_Button*, void*);
#include <FL/Fl_Group.H>
#include <FL/Fl_Counter.H>
extern void savesettings(Fl_Button*, void*);
#include <FL/Fl_Help_View.H>

class UI {
public:
  UI();
  Fl_Window *window;
  Fl_Text_Display *text_display;
  Fl_Scroll *scroll;
  Fl_Input *path_input;
  Fl_Box *box1;
  Fl_Box *box2;
  Fl_Window *edit_paths;
  Fl_Scroll *paths;
  Fl_Window *settings;
  Fl_Input *log;
private:
  inline void cb_log_i(Fl_Input*, void*);
  static void cb_log(Fl_Input*, void*);
public:
  Fl_Button *timestamptrue;
private:
  inline void cb_timestamptrue_i(Fl_Button*, void*);
  static void cb_timestamptrue(Fl_Button*, void*);
public:
  Fl_Button *timestampfalse;
private:
  inline void cb_timestampfalse_i(Fl_Button*, void*);
  static void cb_timestampfalse(Fl_Button*, void*);
public:
  Fl_Counter *outputlevel;
private:
  inline void cb_outputlevel_i(Fl_Counter*, void*);
  static void cb_outputlevel(Fl_Counter*, void*);
public:
  Fl_Counter *loglevel;
private:
  inline void cb_loglevel_i(Fl_Counter*, void*);
  static void cb_loglevel(Fl_Counter*, void*);
public:
  Fl_Button *deletesourcetrue;
private:
  inline void cb_deletesourcetrue_i(Fl_Button*, void*);
  static void cb_deletesourcetrue(Fl_Button*, void*);
public:
  Fl_Button *deletesourcefalse;
private:
  inline void cb_deletesourcefalse_i(Fl_Button*, void*);
  static void cb_deletesourcefalse(Fl_Button*, void*);
public:
  Fl_Box *savewarning;
  Fl_Window *help;
  void show();
};
extern void settingchanged(Fl_Widget*, void*);
#endif
