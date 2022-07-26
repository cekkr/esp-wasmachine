// Copyright 2022 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#define LV_FONT_GET_FONT                0
#define LV_DISP_GET_NEXT                1
#define LV_DISP_GET_DEFAULT             2
#define LV_DISP_GET_SCR_ACT             3
#define LV_DISP_GET_HOR_RES             4
#define LV_DISP_GET_VER_RES             5
#define LV_DISP_SET_MONITOR_CB          6
#define LV_OBJ_REMOVE_STYLE             7
#define LV_OBJ_SET_STYLE_BG_OPA         8
#define LV_OBJ_SET_POS                  9
#define LV_OBJ_ALIGN_TO                 10
#define LV_OBJ_CREATE                   11
#define LV_OBJ_GET_WIDTH                12
#define LV_OBJ_GET_HEIGHT               13
#define LV_OBJ_SET_SIZE                 14
#define LV_OBJ_ALIGN                    15
#define LV_OBJ_UPDATE_LAYOUT            16
#define LV_OBJ_CLEAN                    17
#define LV_OBJ_SET_FLEX_FLOW            18
#define LV_OBJ_GET_CONTENT_WIDTH        19
#define LV_OBJ_SET_WIDTH                20
#define LV_OBJ_SET_STYLE_LINE_COLOR     21
#define LV_OBJ_SET_STYLE_ARC_COLOR      22
#define LV_OBJ_SET_STYLE_IMG_RECOLOR    23
#define LV_OBJ_SET_STYLE_TEXT_COLOR     24
#define LV_OBJ_SET_X                    25
#define LV_OBJ_SET_Y                    26
#define LV_OBJ_ADD_STYLE                27
#define LV_OBJ_SET_STYLE_BG_COLOR       28
#define LV_OBJ_SET_STYLE_BORDER_COLOR   29
#define LV_OBJ_SET_STYLE_SHADOW_COLOR   30
#define LV_LABEL_CREATE                 31
#define LV_LABEL_SET_TEXT               32
#define LV_TABLE_CREATE                 33
#define LV_TABLE_SET_COL_CNT            34
#define LV_TABLE_SET_COL_WIDTH          35
#define LV_TABLE_ADD_CELL_CTRL          36
#define LV_TABLE_SET_CELL_VALUE         37
#define LV_TIMER_CREATE                 38
#define LV_TIMER_SET_REPEAT_COUNT       39
#define LV_STYLE_INIT                   40
#define LV_STYLE_RESET                  41
#define LV_STYLE_SET_BG_OPA             42
#define LV_STYLE_SET_RADIUS             43
#define LV_STYLE_SET_BORDER_WIDTH       44
#define LV_STYLE_SET_BORDER_OPA         45
#define LV_STYLE_SET_BORDER_SIDE        46
#define LV_STYLE_SET_SHADOW_OPA         47
#define LV_STYLE_SET_SHADOW_WIDTH       48
#define LV_STYLE_SET_SHADOW_OFS_X       49
#define LV_STYLE_SET_SHADOW_OFS_Y       50
#define LV_STYLE_SET_SHADOW_SPREAD      51
#define LV_STYLE_SET_IMG_OPA            52
#define LV_STYLE_SET_IMG_RECOLOR_OPA    53
#define LV_STYLE_SET_TEXT_FONT          54
#define LV_STYLE_SET_TEXT_OPA           55
#define LV_STYLE_SET_LINE_WIDTH         56
#define LV_STYLE_SET_LINE_OPA           57
#define LV_STYLE_SET_ARC_WIDTH          58
#define LV_STYLE_SET_ARC_OPA            59
#define LV_STYLE_SET_BLEND_MODE         60
#define LV_STYLE_SET_TEXT_COLOR         61
#define LV_LINE_CREATE                  62
#define LV_LINE_SET_POINTS              63
#define LV_ARC_CREATE                   64
#define LV_ARC_SET_START_ANGLE          65
#define LV_ARC_SET_END_ANGLE            66
#define LV_IMG_CREATE                   67
#define LV_IMG_SET_SRC                  68
#define LV_IMG_SET_ANGLE                69
#define LV_IMG_SET_ZOOM                 70
#define LV_IMG_SET_ANTIALIAS            71
#define LV_ANIM_INIT                    72
#define LV_ANIM_START                   73
#define LV_THEME_GET_FONT_SMALL         74
#define LV_THEME_GET_FONT_NORMAL        75
#define LV_THEME_GET_FONT_LARGE         76
#define LV_THEME_DEFAULT_INIT           77
#define KV_THEME_GET_COLOR_PRIMARY      78
#define LV_FONT_GET_BITMAP_FMT_TXT      79
#define LV_FONT_GET_GLYPH_DSC_FMT_TXT   80
#define LV_PALETTE_MAIN                 81
#define LV_TABVIEW_MAIN                 82
#define LV_OBJ_SET_STYLE_TEXT_FONT      83
#define LV_TABVIEW_GET_TAB_BTNS         84
#define LV_OBJ_SET_STYLE_PAD_LEFT       85
#define LV_TABVIEW_ADD_TAB              86
#define LV_OBJ_SET_HEIGHT               87
#define LV_LABEL_SET_LONG_MODE          88
#define LV_BTN_CREATE                   89
#define LV_OBJ_ADD_STATE                90
#define LV_KEYBOARD_CREATE              91
#define LV_OBJ_ADD_FLAG                 92
#define LV_TEXTAREA_CREATE              93
#define LV_TEXTAREA_SET_ONE_LINE        94
#define LV_TEXTAREA_SET_PLACEHOLDER_TEXT  95
#define LV_OBJ_ADD_EVENT_CB             96
#define LV_TEXTAREA_SET_PASSWORD_MODE   97
#define LV_DROPDOWN_CREATE              98
#define LV_DROPDOWN_SET_OPTIONS_STATIC  99
#define LV_SLIDER_CREATE                100
#define LV_OBJ_REFRESH_EXT_DRAW_SIZE    101
#define LV_SWITCH_CREATE                102
#define LV_OBJ_SET_GRID_DSC_ARRAY       103
#define LV_OBJ_SET_GRID_CELL            104
#define LV_OBJ_SET_STYLE_TEXT_ALIGN     105
#define LV_OBJ_SET_FLEX_GROW            106
#define LV_OBJ_SET_STYLE_MAX_HEIGHT     107
#define LV_CHART_CREATE                 108
#define LV_GROUP_GET_DEFAULT            109
#define LV_GROUP_ADD_OBJ                110
#define LV_CHART_SET_AXIS_TICK          111
#define LV_CHART_SET_DIV_LINE_COUNT     112
#define LV_CHART_SET_POINT_COUNT        113
#define LV_CHART_SET_ZOOM_X             114
#define LV_OBJ_SET_STYLE_BORDER_SIDE    115
#define LV_OBJ_SET_STYLE_RADIUS         116
#define LV_CHART_ADD_SERIES             117
#define LV_RAND                         118
#define LV_CHART_SET_NEXT_VALUE         119
#define LV_CHART_SET_TYPE               120
#define LV_OBJ_SET_STYLE_PAD_ROW        121
#define LV_OBJ_SET_STYLE_PAD_COLUMN     122
#define LV_PALETTE_LIGHTEN              123
#define LV_OBJ_GET_PARENT               124
#define LV_METER_ADD_SCALE              125
#define LV_METER_SET_SCALE_RANGE        126
#define LV_METER_SET_SCALE_TICKS        127
#define LV_METER_ADD_ARC                128
#define LV_METER_SET_INDICATOR_START_VALUE  129
#define LV_METER_SET_INDICATOR_END_VALUE    130
#define LV_OBJ_SET_STYLE_PAD_RIGHT      131
#define LV_OBJ_SET_STYLE_WIDTH          132
#define LV_OBJ_SET_STYLE_HEIGHT         133
#define LV_PALETTE_DARKEN               134
#define LV_OBJ_SET_STYLE_OUTLINE_COLOR  135
#define LV_OBJ_SET_STYLE_OUTLINE_WIDTH  136
#define LV_METER_SET_SCALE_MAJOR_TICKS  137
#define LV_METER_ADD_SCALE_LINES        138
#define LV_OBJ_SET_STYLE_PAD_BOTTOM     139
#define LV_DISP_GET_DPI                 140
#define LV_CHECKBOX_CREATE              141
#define LV_CHECKBOX_SET_TEXT            142
#define LV_OBJ_SET_FLEX_ALIGN           143
#define LV_OBJ_SET_STYLE_OPA            144
#define LV_OBJ_CLEAR_FLAG               145
#define LV_OBJ_SET_STYLE_PAD_TOP        146
#define LV_OBJ_SET_STYLE_SHADOW_WIDTH   147
#define LV_OBJ_SET_STYLE_BG_IMG_SRC     148
#define LV_EVENT_GET_CODE               149
#define LV_EVENT_GET_TARGET             150
#define LV_EVENT_GET_USER_DATA          151
#define LV_INDEV_GET_ACT                152
#define LV_INDEV_GET_TYPE               153
#define LV_KEYBOARD_SET_TEXTAREA        154
#define LV_OBJ_SCROLL_TO_VIEW_RECURSIVE 155
#define LV_INDEV_RESET                  156
#define LV_OBJ_CLEAR_STATE              157
#define LV_DISP_GET_LAYER_TOP           158
#define LV_CALENDAR_CREATE              159
#define LV_CALENDAR_SET_SHOWED_DATE     160
#define LV_CALENDAR_HEADER_DROPDOWN_CREATE  161
#define LV_EVENT_GET_PARAM              162
#define LV_OBJ_HAS_STATE                163
#define LV_BAR_GET_VALUE                164
#define LV_TXT_GET_SIZE                 165
#define LV_DRAW_RECT_DSC_INIT           166
#define LV_DRAW_RECT                    167
#define LV_DRAW_LABEL_DSC_INIT          168
#define LV_DRAW_LABEL                   169
#define LV_EVENT_GET_CURRENT_TARGET     170
#define LV_CALENDAR_GET_PRESSED_DATE    171
#define LV_TEXTAREA_SET_TEXT            172
#define LV_OBJ_DEL                      173
#define LV_OBJ_INVALIDATE               174
#define LV_CHART_GET_TYPE               175
#define LV_DRAW_MASK_LINE_POINTS_INIT   176
#define LV_DRAW_MASK_ADD                177
#define LV_DRAW_MASK_FADE_INIT          178
#define _LV_AREA_INTERSECT              179
#define LV_DRAW_MASK_REMOVE_ID          180
#define LV_CHART_GET_PRESSED_POINT      181
#define LV_CHART_GET_SERIES_NEXT        182
#define LV_METER_CREATE                 183
#define LV_OBJ_GET_CHILD                184
#define LV_METER_SET_INDICATOR_VALUE    185
#define LV_CHART_SET_SERIES_COLOR       186
#define LV_MAP                          187
#define LV_OBJ_GET_CHILD_CNT            188
#define LV_METER_ADD_NEEDLE_LINE        189
#define LV_MEM_TEST                     190
#define LV_MEM_MONITOR                  191
#define LV_COLORWHEEL_CREATE            192
#define LV_TABVIEW_SET_ACT              193
#define LV_OBJ_DEL_ANIM_READY_CB        194
#define LV_OBJ_DEL_ASYNC                195
#define LV_BAR_CREATE                   196
#define LV_BAR_SET_RANGE                197
#define LV_BAR_SET_VALUE                198
#define LV_BAR_SET_START_VALUE          199
#define LV_OBJ_SET_STYLE_ANIM_TIME      200
#define LV_WIN_CREATE                   201
#define LV_WIN_ADD_TITLE                202
#define LV_WIN_ADD_BTN                  203
#define LV_WIN_GET_CONTENT              204
#define LV_KEYBOARD_SET_MODE            205
#define LV_DROPDOWN_SET_OPTIONS         206
#define LV_DROPDOWN_OPEN                207
#define LV_DROPDOWN_SET_SELECTED        208
#define LV_ROLLER_CREATE                209
#define LV_ROLLER_SET_OPTIONS           210
#define LV_ROLLER_SET_SELECTED          211
#define LV_MSGBOX_CREATE                212
#define LV_TILEVIEW_CREATE              213
#define LV_TILEVIEW_ADD_TILE            214
#define LV_OBJ_SET_TILE_ID              215
#define LV_LIST_CREATE                  216
#define LV_LIST_ADD_BTN                 217
#define LV_OBJ_SCROLL_TO_VIEW           218
#define LV_TEXTAREA_SET_CURSOR_POS      219
#define LV_TEXTAREA_ADD_CHAR            220
#define LV_TEXTAREA_ADD_TEXT            221
#define LV_SPINBOX_CREATE               222
#define LV_SPINBOX_SET_DIGIT_FORMAT     223
#define LV_SPINBOX_SET_VALUE            224
#define LV_SPINBOX_SET_STEP             225
#define LV_SPINBOX_INCREMENT            226
#define LV_OBJ_SCROLL_BY                227
#define LV_TEXTAREA_DEL_CHAR_FORWARD    228
#define LV_MSGBOX_CLOSE                 229
#define LV_STYLE_SET_WIDTH              230
#define LV_STYLE_SET_BG_COLOR           231
#define LV_STYLE_SET_PAD_RIGHT          232
#define LV_STYLE_SET_GRID_COLUMN_DSC_ARRAY  233
#define LV_STYLE_SET_GRID_ROW_DSC_ARRAY 234
#define LV_STYLE_SET_GRID_ROW_ALIGN     235
#define LV_STYLE_SET_LAYOUT             236
#define LV_OBJ_GET_INDEX                237
#define LV_OBJ_SET_SCROLL_SNAP_Y        238
#define LV_OBJ_SET_STYLE_BORDER_WIDTH   239
#define LV_OBJ_SET_SCROLL_DIR           240
#define LV_IMGBTN_CREATE                241
#define LV_IMGBTN_SET_SRC               242
#define LV_OBJ_SET_STYLE_BG_GRAD_DIR    243
#define LV_OBJ_SET_STYLE_BG_GRAD_COLOR  244
#define LV_OBJ_SET_STYLE_GRID_ROW_ALIGN 245
#define LV_TIMER_PAUSE                  246
#define LV_ANIM_PATH_BOUNCE             247
#define LV_OBJ_FADE_IN                  248
#define LV_ANIM_PATH_EASE_OUT           249
#define LV_OBJ_MOVE_TO_INDEX            250
#define LV_OBJ_SET_STYLE_TEXT_LINE_SPACE  251
#define LV_OBJ_FADE_OUT                 252
#define LV_TIMER_RESUME                 253
#define LV_ANIM_PATH_LINEAR             254
#define LV_ANIM_PATH_OVERSHOOT          255
#define LV_ANIM_DEL                     256
#define LV_EVENT_SET_EXT_DRAW_SIZE      257
#define LV_EVENT_SET_COVER_RES          258
#define LV_OBJ_GET_STYLE_PROP           259
#define LV_IMG_GET_ZOOM                 260
#define LV_TRIGO_SIN                    261
#define LV_DRAW_POLYGON                 262
#define LV_INDEV_GET_GESTURE_DIR        263
#define LV_ANIM_PATH_EASE_IN            264
#define LV_OBJ_GET_DATA                 265
#define LV_TIMER_GET_USER_DATA          266
#define LV_OBJ_DRAW_PART_DSC_GET_DATA   267
#define LV_OBJ_DRAW_PART_DSC_SET_DATA   268
#define LV_CHART_SERIES_GET_DATA        269
#define LV_FONT_GET_DATA                270

#define LV_OBJ_COORDS                     0 /*!< type of set/get lv_obj_t->coords */

#define LV_OBJ_DRAW_PART_DSC_TYPE         0 /*!< type of set/get lv_obj_draw_part_dsc_t->type */
#define LV_OBJ_DRAW_PART_DSC_PART         1 /*!< type of set/get lv_obj_draw_part_dsc_t->part */
#define LV_OBJ_DRAW_PART_DSC_ID           2 /*!< type of set/get lv_obj_draw_part_dsc_t->id */
#define LV_OBJ_DRAW_PART_DSC_TEXT         3 /*!< type of set/get lv_obj_draw_part_dsc_t->text */
#define LV_OBJ_DRAW_PART_DSC_VALUE        4 /*!< type of set/get lv_obj_draw_part_dsc_t->value */
#define LV_OBJ_DRAW_PART_DSC_P1           5 /*!< type of set/get lv_obj_draw_part_dsc_t->p1 */
#define LV_OBJ_DRAW_PART_DSC_P2           6 /*!< type of set/get lv_obj_draw_part_dsc_t->p2 */
#define LV_OBJ_DRAW_PART_DSC_CLIP_AREA    7 /*!< type of set/get lv_obj_draw_part_dsc_t->clip_area */
#define LV_OBJ_DRAW_PART_DSC_DRAW_AREA    8 /*!< type of set/get lv_obj_draw_part_dsc_t->draw_area */
#define LV_OBJ_DRAW_PART_DSC_RECT_DSC     9 /*!< type of set/get lv_obj_draw_part_dsc_t->rect_dsc */
#define LV_OBJ_DRAW_PART_DSC_LINE_DSC     10 /*!< type of set/get lv_obj_draw_part_dsc_t->line_dsc */
#define LV_OBJ_DRAW_PART_DSC_SUB_PART_PTR 11 /*!< type of set/get lv_obj_draw_part_dsc_t->sub_part_ptr */

#define LV_CHART_SERIES_COLOR             0 /*!< type of set/get lv_chart_series_t->color */

#define LV_FONT_LINE_HEIGHT               0 /*!< type of set/get lv_font_t->line_height */

#define LV_FONT_MONTSERRAT_8_FONT 0
#define LV_FONT_MONTSERRAT_10_FONT 1
#define LV_FONT_MONTSERRAT_12_FONT 2
#define LV_FONT_MONTSERRAT_14_FONT 3
#define LV_FONT_MONTSERRAT_16_FONT 4
#define LV_FONT_MONTSERRAT_18_FONT 5
#define LV_FONT_MONTSERRAT_20_FONT 6
#define LV_FONT_MONTSERRAT_22_FONT 7
#define LV_FONT_MONTSERRAT_24_FONT 8
#define LV_FONT_MONTSERRAT_26_FONT 9
#define LV_FONT_MONTSERRAT_28_FONT 10
#define LV_FONT_MONTSERRAT_30_FONT 11
#define LV_FONT_MONTSERRAT_32_FONT 12
#define LV_FONT_MONTSERRAT_34_FONT 13
#define LV_FONT_MONTSERRAT_36_FONT 14
#define LV_FONT_MONTSERRAT_38_FONT 15
#define LV_FONT_MONTSERRAT_40_FONT 16
#define LV_FONT_MONTSERRAT_42_FONT 17
#define LV_FONT_MONTSERRAT_44_FONT 18
#define LV_FONT_MONTSERRAT_46_FONT 19
#define LV_FONT_MONTSERRAT_48_FONT 20
#define LV_FONT_MONTSERRAT_28_COMPRESSED_FONT 21
#define LV_FONT_MONTSERRAT_12_SUBPX_FONT 22
#define LV_FONT_UNSCII_8_FONT 23
#define LV_FONT_UNSCII_16_FONT 24
#define LV_FONT_DEJAVU_16_PERSIAN_HEBREW_FONT 25
#define LV_FONT_SIMSUN_16_CJK_FONT 26
