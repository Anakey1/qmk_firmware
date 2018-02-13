#ifndef MYTH_H
#define MYTH_H

#include "quantum.h"

#define KEYMAP( \
	K0000, K0001, K0002, K0003, K0004, K0005, K0006, K0007, K0008, K0009, K0010, K0011, K0012, K0013,                             \
	K0100, K0101, K0102, K0103, K0104, K0105, K0106, K0107, K0108, K0109, K0110, K0111, K0112, K0113,                             \
	K0200, K0201, K0202, K0203, K0204, K0205, K0206, K0207, K0208, K0209, K0210, K0211, K0212, K0213,                             \
	K0300, K0301, K0302, K0303, K0304, K0305, K0306, K0307, K0308, K0309, K0310, K0311, K0312, K0313,                             \
	K0400, K0401, K0402, K0403,        K0405,        K0407,        K0409, K0410, K0411, K0412, K0413,                             \
	                                                                                                  K0514, K0515, K0516, K0517, \
	                                                                                                  K0614, K0615, K0616, K0617, \
	                                                                                                  K0714, K0715, K0716, K0717, \
	                                                                                                  K0814, K0815, K0816, K0817, \
	                                                                                                  K0914, K0915, K0916, K0917  \
) { \
	{ K0000, K0001, K0002, K0003, K0004, K0005, K0006, K0007, K0008, K0009, K0010, K0011, K0012, K0013, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K0100, K0101, K0102, K0103, K0104, K0105, K0106, K0107, K0108, K0109, K0110, K0111, K0112, K0113, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K0200, K0201, K0202, K0203, K0204, K0205, K0206, K0207, K0208, K0209, K0210, K0211, K0212, K0213, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K0300, K0301, K0302, K0303, K0304, K0305, K0306, K0307, K0308, K0309, K0310, K0311, K0312, K0313, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K0400, K0401, K0402, K0403, KC_NO, K0405, KC_NO, K0407, KC_NO, K0409, K0410, K0411, K0412, K0413, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0514, K0515, K0516, K0517 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0614, K0615, K0616, K0617 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0714, K0715, K0716, K0717 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0814, K0815, K0816, K0817 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0914, K0915, K0916, K0917 }  \
}

#endif