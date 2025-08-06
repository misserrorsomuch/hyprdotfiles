static const char norm_fg[] = "#c1c2c3";
static const char norm_bg[] = "#070e10";
static const char norm_border[] = "#566669";

static const char sel_fg[] = "#c1c2c3";
static const char sel_bg[] = "#053b78";
static const char sel_border[] = "#c1c2c3";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
