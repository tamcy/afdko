/* Copyright 2014 Adobe Systems Incorporated (http://www.adobe.com/). All Rights Reserved.
      This software is licensed as OpenSource, under the Apache License, Version 2.0.
         This license is available at: http://opensource.org/licenses/Apache-2.0. */

// NOLINT(build/header_guard)
"[-dump options: default -1]\n"
"-0      global data\n"
"-1      global data + glyph data (short)\n"
"-2      global data + glyph data (medium)\n"
"-3      global data + glyph data (long)\n"
"-4      glyph data (short)\n"
"-5      glyph data (medium)\n"
"-6      glyph data (long)\n"
"-d      remove dotsection and convert seac charstring operators\n"
"-n      no hints (suppress h/vstem, flex, and dotsection)\n"
"\n"
"Dump mode writes an ASCII text dump of an abstract font. The display of global\n",
"font data or glyph and charstring data is controlled by the various options\n"
"described above. All charstring data is specified in absolute character space \n"
"units.\n"
"\n"
"For example, the command:\n"
"\n"
"    tx -6 -g exclam,a rdr_____.pfb\n"
"\n"
"will write, on standard output, a full dump the glyph and charstring data for\n"
"the glyphs named \"exclam\" and \"a\" from the font file \"rdr_____.pfb\".\n"
"\n"
"Note that since dump is the default mode for tx it isn't necessary to specify\n"
"the -dump option.\n"