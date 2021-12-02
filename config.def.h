/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0x0f;
static int colorprompt = 1;                /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */

/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[64] = "monospace:size=10";
static const char *fonts[] = {
	font,
	"monospace:size=10",
};

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { "#000000",   "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " /?\"&[]=";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",           STRING, &font },
	{ "foreground",     STRING, &normfgcolor },
	{ "background",     STRING, &normbgcolor },
	{ "selforeground",  STRING, &selfgcolor },
	{ "selbackground",  STRING, &selbgcolor },
	{ "prompt",         STRING, &prompt },
	{ "lines",          INTEGER, &lines },
	{ "lineheight",     INTEGER, &lineheight },
};
