/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *Login_Screen;
	bool Login_Screen_del;
	lv_obj_t *g_kb_Login_Screen;
	lv_obj_t *Login_Screen_BAN_IMG;
	lv_obj_t *Login_Screen_Monkey_IMG;
	lv_obj_t *Login_Screen_LoginEnter;
	lv_obj_t *Login_Screen_LoginEnter_label;
	lv_obj_t *Login_Screen_LoginTitle;
	lv_obj_t *Login_Screen_TA1;
	lv_obj_t *SystemControl;
	bool SystemControl_del;
	lv_obj_t *g_kb_SystemControl;
	lv_obj_t *SystemControl_cont_1;
	lv_obj_t *SystemControl_SystemSwitchLabel;
	lv_obj_t *SystemControl_SystemSwitch;
	lv_obj_t *SystemControl_Unlock;
	lv_obj_t *SystemControl_Unlock_label;
	lv_obj_t *SystemControl_ControlTitle;
	lv_obj_t *SystemControl_Logout;
	lv_obj_t *SystemControl_Logout_label;
	lv_obj_t *SystemControl_Monkey_IMG_2;
	lv_obj_t *SystemControl_BAN_IMG_2;
	lv_obj_t *UnlockControl;
	bool UnlockControl_del;
	lv_obj_t *g_kb_UnlockControl;
	lv_obj_t *UnlockControl_Matrix;
	lv_obj_t *UnlockControl_PreviousPage;
	lv_obj_t *UnlockControl_PreviousPage_label;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_move_animation(void * var, int32_t duration, int32_t delay, int32_t x_end, int32_t y_end, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_scale_animation(void * var, int32_t duration, int32_t delay, int32_t width, int32_t height, lv_anim_path_cb_t path_cb,
                        uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                        lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_zoom_animation(void * var, int32_t duration, int32_t delay, int32_t zoom, lv_anim_path_cb_t path_cb,
                           uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                           lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_rotate_animation(void * var, int32_t duration, int32_t delay, lv_coord_t x, lv_coord_t y, int32_t rotate,
                   lv_anim_path_cb_t path_cb, uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time,
                   uint32_t playback_delay, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);


extern lv_ui guider_ui;

void setup_scr_Login_Screen(lv_ui *ui);
void setup_scr_SystemControl(lv_ui *ui);
void setup_scr_UnlockControl(lv_ui *ui);
LV_IMG_DECLARE(_monkey_alpha_190x195);
LV_IMG_DECLARE(_notallow_alpha_182x189);

LV_IMG_DECLARE(_logout_35x35);
LV_IMG_DECLARE(_monkey_alpha_190x195);
LV_IMG_DECLARE(_notallow_alpha_182x189);

LV_IMG_DECLARE(_arrow_32x32);

LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_montserratMedium_20)
LV_FONT_DECLARE(lv_font_Alatsi_Regular_24)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_18)


#ifdef __cplusplus
}
#endif
#endif