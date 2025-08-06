const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#070e10", /* black   */
  [1] = "#053b78", /* red     */
  [2] = "#06717e", /* green   */
  [3] = "#166dba", /* yellow  */
  [4] = "#4374c7", /* blue    */
  [5] = "#149b92", /* magenta */
  [6] = "#52a7be", /* cyan    */
  [7] = "#c1c2c3", /* white   */

  /* 8 bright colors */
  [8]  = "#566669",  /* black   */
  [9]  = "#053b78",  /* red     */
  [10] = "#06717e", /* green   */
  [11] = "#166dba", /* yellow  */
  [12] = "#4374c7", /* blue    */
  [13] = "#149b92", /* magenta */
  [14] = "#52a7be", /* cyan    */
  [15] = "#c1c2c3", /* white   */

  /* special colors */
  [256] = "#070e10", /* background */
  [257] = "#c1c2c3", /* foreground */
  [258] = "#c1c2c3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
