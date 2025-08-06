/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x070e10ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc1c2c3ff, 0x070e10ff, 0x566669ff },
	[SchemeSel]  = { 0xc1c2c3ff, 0x06717eff, 0x053b78ff },
	[SchemeUrg]  = { 0xc1c2c3ff, 0x053b78ff, 0x06717eff },
};
