/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_SystemControl(lv_ui *ui)
{
	//Write codes SystemControl
	ui->SystemControl = lv_obj_create(NULL);
	ui->g_kb_SystemControl = lv_keyboard_create(ui->SystemControl);
	lv_obj_add_event_cb(ui->g_kb_SystemControl, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_SystemControl, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_SystemControl, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->SystemControl, 480, 272);
	lv_obj_set_scrollbar_mode(ui->SystemControl, LV_SCROLLBAR_MODE_OFF);

	//Write style for SystemControl, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->SystemControl, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->SystemControl, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->SystemControl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes SystemControl_cont_1
	ui->SystemControl_cont_1 = lv_obj_create(ui->SystemControl);
	lv_obj_set_pos(ui->SystemControl_cont_1, 233, 66);
	lv_obj_set_size(ui->SystemControl_cont_1, 223, 180);
	lv_obj_set_scrollbar_mode(ui->SystemControl_cont_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for SystemControl_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->SystemControl_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->SystemControl_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->SystemControl_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->SystemControl_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->SystemControl_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->SystemControl_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->SystemControl_cont_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->SystemControl_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->SystemControl_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->SystemControl_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->SystemControl_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->SystemControl_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->SystemControl_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes SystemControl_SystemSwitchLabel
	ui->SystemControl_SystemSwitchLabel = lv_label_create(ui->SystemControl_cont_1);
	lv_label_set_text(ui->SystemControl_SystemSwitchLabel, "System On/Off");
	lv_label_set_long_mode(ui->SystemControl_SystemSwitchLabel, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->SystemControl_SystemSwitchLabel, 27, 16);
	lv_obj_set_size(ui->SystemControl_SystemSwitchLabel, 167, 19);

	//Write style for SystemControl_SystemSwitchLabel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->SystemControl_SystemSwitchLabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->SystemControl_SystemSwitchLabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->SystemControl_SystemSwitchLabel, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->SystemControl_SystemSwitchLabel, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->SystemControl_SystemSwitchLabel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->SystemControl_SystemSwitchLabel, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->SystemControl_SystemSwitchLabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->SystemControl_SystemSwitchLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->SystemControl_SystemSwitchLabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->SystemControl_SystemSwitchLabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->SystemControl_SystemSwitchLabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->SystemControl_SystemSwitchLabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->SystemControl_SystemSwitchLabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->SystemControl_SystemSwitchLabel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes SystemControl_SystemSwitch
	ui->SystemControl_SystemSwitch = lv_switch_create(ui->SystemControl_cont_1);
	lv_obj_set_pos(ui->SystemControl_SystemSwitch, 82, 48);
	lv_obj_set_size(ui->SystemControl_SystemSwitch, 40, 22);

	//Write style for SystemControl_SystemSwitch, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->SystemControl_SystemSwitch, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->SystemControl_SystemSwitch, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->SystemControl_SystemSwitch, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->SystemControl_SystemSwitch, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->SystemControl_SystemSwitch, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->SystemControl_SystemSwitch, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for SystemControl_SystemSwitch, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->SystemControl_SystemSwitch, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->SystemControl_SystemSwitch, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->SystemControl_SystemSwitch, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->SystemControl_SystemSwitch, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for SystemControl_SystemSwitch, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->SystemControl_SystemSwitch, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->SystemControl_SystemSwitch, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->SystemControl_SystemSwitch, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->SystemControl_SystemSwitch, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->SystemControl_SystemSwitch, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes SystemControl_Unlock
	ui->SystemControl_Unlock = lv_btn_create(ui->SystemControl_cont_1);
	ui->SystemControl_Unlock_label = lv_label_create(ui->SystemControl_Unlock);
	lv_label_set_text(ui->SystemControl_Unlock_label, "Unlock");
	lv_label_set_long_mode(ui->SystemControl_Unlock_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->SystemControl_Unlock_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->SystemControl_Unlock, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->SystemControl_Unlock, 55, 94);
	lv_obj_set_size(ui->SystemControl_Unlock, 100, 50);

	//Write style for SystemControl_Unlock, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->SystemControl_Unlock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->SystemControl_Unlock, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->SystemControl_Unlock, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->SystemControl_Unlock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->SystemControl_Unlock, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->SystemControl_Unlock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->SystemControl_Unlock, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->SystemControl_Unlock, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->SystemControl_Unlock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->SystemControl_Unlock, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes SystemControl_ControlTitle
	ui->SystemControl_ControlTitle = lv_label_create(ui->SystemControl);
	lv_label_set_text(ui->SystemControl_ControlTitle, "Control Panel");
	lv_label_set_long_mode(ui->SystemControl_ControlTitle, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->SystemControl_ControlTitle, 5, 13);
	lv_obj_set_size(ui->SystemControl_ControlTitle, 470, 26);

	//Write style for SystemControl_ControlTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->SystemControl_ControlTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->SystemControl_ControlTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->SystemControl_ControlTitle, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->SystemControl_ControlTitle, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->SystemControl_ControlTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->SystemControl_ControlTitle, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->SystemControl_ControlTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->SystemControl_ControlTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->SystemControl_ControlTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->SystemControl_ControlTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->SystemControl_ControlTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->SystemControl_ControlTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->SystemControl_ControlTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->SystemControl_ControlTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes SystemControl_Logout
	ui->SystemControl_Logout = lv_btn_create(ui->SystemControl);
	ui->SystemControl_Logout_label = lv_label_create(ui->SystemControl_Logout);
	lv_label_set_text(ui->SystemControl_Logout_label, "");
	lv_label_set_long_mode(ui->SystemControl_Logout_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->SystemControl_Logout_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->SystemControl_Logout, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->SystemControl_Logout, 429, 16);
	lv_obj_set_size(ui->SystemControl_Logout, 35, 35);

	//Write style for SystemControl_Logout, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->SystemControl_Logout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->SystemControl_Logout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->SystemControl_Logout, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->SystemControl_Logout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->SystemControl_Logout, &_logout_35x35, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->SystemControl_Logout, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->SystemControl_Logout, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->SystemControl_Logout, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->SystemControl_Logout, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->SystemControl_Logout, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes SystemControl_Monkey_IMG_2
	ui->SystemControl_Monkey_IMG_2 = lv_img_create(ui->SystemControl);
	lv_obj_add_flag(ui->SystemControl_Monkey_IMG_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->SystemControl_Monkey_IMG_2, &_monkey_alpha_190x195);
	lv_img_set_pivot(ui->SystemControl_Monkey_IMG_2, 50,50);
	lv_img_set_angle(ui->SystemControl_Monkey_IMG_2, 0);
	lv_obj_set_pos(ui->SystemControl_Monkey_IMG_2, 25, 53);
	lv_obj_set_size(ui->SystemControl_Monkey_IMG_2, 190, 195);

	//Write style for SystemControl_Monkey_IMG_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->SystemControl_Monkey_IMG_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes SystemControl_BAN_IMG_2
	ui->SystemControl_BAN_IMG_2 = lv_img_create(ui->SystemControl);
	lv_obj_add_flag(ui->SystemControl_BAN_IMG_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->SystemControl_BAN_IMG_2, &_notallow_alpha_182x189);
	lv_img_set_pivot(ui->SystemControl_BAN_IMG_2, 50,50);
	lv_img_set_angle(ui->SystemControl_BAN_IMG_2, 0);
	lv_obj_set_pos(ui->SystemControl_BAN_IMG_2, 29, 57);
	lv_obj_set_size(ui->SystemControl_BAN_IMG_2, 182, 189);

	//Write style for SystemControl_BAN_IMG_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->SystemControl_BAN_IMG_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of SystemControl.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->SystemControl);

	//Init events for screen.
	events_init_SystemControl(ui);
}
