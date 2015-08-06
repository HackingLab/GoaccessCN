/**
 * Copyright (C) 2009-2014 by Gerardo Orellana <goaccess@prosoftcorp.com>
 * GoAccess - An Ncurses apache weblog analyzer & interactive viewer
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * A copy of the GNU General Public License is attached to this
 * source distribution for its full text.
 *
 * Visit http://goaccess.prosoftcorp.com for new releases.
 */

#ifndef UI_H_INCLUDED
#define UI_H_INCLUDED

#ifdef HAVE_NCURSESW_NCURSES_H
#include <ncursesw/ncurses.h>
#elif HAVE_NCURSES_NCURSES_H
#include <ncurses/ncurses.h>
#elif HAVE_NCURSES_H
#include <ncurses.h>
#elif HAVE_CURSES_H
#include <curses.h>
#endif

#ifdef HAVE_LIBPTHREAD
#include <pthread.h>
#endif

/* overall stats */
#define T_DASH       "仪表盘(网站访问日志分析报表)"
#define T_HEAD       "日志分析报表总览"

#define T_DATETIME   "Date/Time"
#define T_REQUESTS   "请求综述"
#define T_GEN_TIME   "耗时"
#define T_FAILED     "分析失败数"
#define T_UNIQUE_VIS "独立访客"
#define T_UNIQUE_FIL "访问页面数"
#define T_EXCLUDE_IP "排除IP的访问数"
#define T_REFERRER   "来源URLs数"
#define T_UNIQUE404  "404页面数"
#define T_STATIC_FIL "静态资源数"
#define T_LOG        "日志文件大小"
#define T_BW         "流量耗费总量"
#define T_LOG_PATH   "日志文件位置"

/* spinner label format */
#define SPIN_FMT "%s"
#define SPIN_FMTM "%s [%'d] [%'lld/s]"
#define SPIN_LBL 50

#define INCLUDE_BOTS " - Including spiders"

/* modules */
#define VISIT_HEAD  "每日独立访客"
#define VISIT_DESC  "相同IP/UA/DATE的访客称为独立访客"
#define VISIT_ID    "visitors"
#define VISIT_LABEL "Visitors"

#define REQUE_HEAD  "请求最多的地址(URLs)"
#define REQUE_DESC  "按照点击数排序 - [avg. time served | protocol | method]"
#define REQUE_ID    "requests"
#define REQUE_LABEL "Requests"

#define STATI_HEAD  "请求最多的静态资源 (如:jpg, png, js, css等)"
#define STATI_DESC  "按照点击数排序 - [avg. time served | protocol | method]"
#define STATI_ID    "static_requests"
#define STATI_LABEL "Static Requests"

#define VTIME_HEAD  "时间分布"
#define VTIME_DESC  "按小时排序 - [avg. time served]"
#define VTIME_ID    "visit_time"
#define VTIME_LABEL "Time"

#define FOUND_HEAD  "404未找到的地址(URLs)"
#define FOUND_DESC  "按照点击数排序- [avg. time served | protocol | method]"
#define FOUND_ID    "not_found"
#define FOUND_LABEL "Not Found"

#define HOSTS_HEAD  "访客主机名或IP"
#define HOSTS_DESC  "按照点击数排序 - [avg. time served]"
#define HOSTS_ID    "hosts"
#define HOSTS_LABEL "Hosts"

#define OPERA_HEAD  "操作系统"
#define OPERA_DESC  "按照点击数排序 - [avg. time served]"
#define OPERA_ID    "os"
#define OPERA_LABEL "OS"

#define BROWS_HEAD  "浏览器"
#define BROWS_DESC  "按照点击数排序- [avg. time served]"
#define BROWS_ID    "browsers"
#define BROWS_LABEL "Browsers"

#define REFER_HEAD  "来源地址(URLs)"
#define REFER_DESC  "按照点击数排序- [avg. time served]"
#define REFER_ID    "referrers"
#define REFER_LABEL "Referrers"

#define SITES_HEAD  "来源网站域名"
#define SITES_DESC  "按照点击数排序 - [avg. time served]"
#define SITES_ID    "referring_sites"
#define SITES_LABEL "Referring Sites"

#define KEYPH_HEAD  "Google搜索关键字"
#define KEYPH_DESC  "按照点击数排序 - [avg. time served]"
#define KEYPH_ID    "keyphrases"
#define KEYPH_LABEL "Keyphrases"

#define GEOLO_HEAD  "访客地址分布"
#define GEOLO_DESC  "按照点击数排序 - [avg. time served]"
#define GEOLO_ID    "geolocation"
#define GEOLO_LABEL "Geo Location"

#define CODES_HEAD  "HTTP状态码"
#define CODES_DESC  "按照点击数排序- [avg. time served]"
#define CODES_ID    "status_codes"
#define CODES_LABEL "Status Codes"

#define GENER_ID   "general"

/* overall statistics */
#define OVERALL_DATETIME  "date_time"
#define OVERALL_REQ       "total_requests"
#define OVERALL_GENTIME   "generation_time"
#define OVERALL_FAILED    "failed_requests"
#define OVERALL_VISITORS  "unique_visitors"
#define OVERALL_FILES     "unique_files"
#define OVERALL_EXCL_HITS "excluded_hits"
#define OVERALL_REF       "unique_referrers"
#define OVERALL_NOTFOUND  "unique_not_found"
#define OVERALL_STATIC    "unique_static_files"
#define OVERALL_LOGSIZE   "log_size"
#define OVERALL_BANDWIDTH "bandwidth"
#define OVERALL_LOG       "log_path"

#define FIND_HEAD    "Find pattern in all views"
#define FIND_DESC    "Regex allowed - ^g to cancel - TAB switch case"

#define MAX_CHOICES       366
#define MIN_HEIGHT        7
#define MIN_WIDTH         0
#define MAX_HEIGHT_FOOTER 1
#define MAX_HEIGHT_HEADER 6

/* CONFIG DIALOG */
#define CONF_MENU_H       6
#define CONF_MENU_W       48
#define CONF_MENU_X       2
#define CONF_MENU_Y       4
#define CONF_WIN_H        20
#define CONF_WIN_W        52

/* FIND DIALOG */
#define FIND_DLG_HEIGHT   8
#define FIND_DLG_WIDTH    50
#define FIND_MAX_MATCHES  1

/* COLOR SCHEME DIALOG */
#define SCHEME_MENU_H     2
#define SCHEME_MENU_W     38
#define SCHEME_MENU_X     2
#define SCHEME_MENU_Y     4
#define SCHEME_WIN_H      8
#define SCHEME_WIN_W      42

/* SORT DIALOG */
#define SORT_MENU_H       6
#define SORT_MENU_W       38
#define SORT_MENU_X       2
#define SORT_MENU_Y       4
#define SORT_WIN_H        13
#define SORT_WIN_W        42

/* AGENTS DIALOG */
#define AGENTS_MENU_X     2
#define AGENTS_MENU_Y     4

/* HELP DIALOG */
#define HELP_MENU_HEIGHT  12
#define HELP_MENU_WIDTH   60
#define HELP_MENU_X       2
#define HELP_MENU_Y       4
#define HELP_WIN_HEIGHT   17
#define HELP_WIN_WIDTH    64

/* COLORS */
#define COL_WHITE         0
#define COL_BLUE          1
#define COL_RED           3
#define COL_BLACK         4
#define COL_CYAN          5
#define COL_YELLOW        6
#define COL_GREEN         11
#define COL_PURPLE        97

#define YELLOW_BLACK      12
#define BLUE_GREEN        7
#define BLACK_GREEN       8
#define BLACK_CYAN        9
#define WHITE_RED         10

#define HIGHLIGHT         1

#define MIN(a, b) (((a) < (b)) ? (a) : (b))

#include "commons.h"
#include "sort.h"

typedef enum SCHEMES
{
  NO_COLOR,
  MONOCHROME,
  STD_GREEN
} GShemes;

typedef struct GFind_
{
  GModule module;
  char *pattern;
  int next_idx;
  int next_parent_idx;
  int next_sub_idx;
  int look_in_sub;
  int done;
  int icase;
} GFind;

typedef struct GScrollModule_
{
  int scroll;
  int offset;
} GScrollModule;

typedef struct GScroll_
{
  GScrollModule module[TOTAL_MODULES];
  GModule current;
  int dash;
  int expanded;
} GScroll;

typedef struct GSpinner_
{
  const char *label;
  int color;
  int curses;
  int spin_x;
  int w;
  int x;
  int y;
  pthread_mutex_t mutex;
  pthread_t thread;
  unsigned int *process;
  WINDOW *win;
  enum
  {
    SPN_RUN,
    SPN_END
  } state;
} GSpinner;

/* *INDENT-OFF* */
GSpinner *new_gspinner (void);

char *get_browser_type (char *line);
char *input_string (WINDOW * win, int pos_y, int pos_x, size_t max_width, const char *str, int enable_case, int *toggle_case);
const char *module_to_desc (GModule module);
const char *module_to_head (GModule module);
const char *module_to_id (GModule module);
const char *module_to_label (GModule module);
int set_host_agents (const char *addr, void (*func) (void *, void *, int), void *arr);
int render_confdlg(GLog * logger, GSpinner * spinner);
void close_win (WINDOW * w);
void display_general (WINDOW * header_win, char *ifile, GLog *logger);
void draw_header (WINDOW * win, const char *s, const char *fmt, int y, int x, int w, int color, int max_width);
void end_spinner (void);
void generate_time (void);
void init_colors (void);
void init_windows (WINDOW ** header_win, WINDOW ** main_win);
void load_agent_list (WINDOW * main_win, char *addr);
void load_help_popup (WINDOW * main_win);
void load_schemes_win (WINDOW * main_win);
void load_sort_win (WINDOW * main_win, GModule module, GSort * sort);
void set_curses_spinner (GSpinner *spinner);
void set_input_opts (void);
void term_size (WINDOW * main_win);
void ui_spinner_create (GSpinner * spinner);
void update_active_module (WINDOW * header_win, GModule current);
void update_header (WINDOW * header_win, int current);

/* *INDENT-ON* */
#endif
