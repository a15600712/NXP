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



void setup_scr_Login_Screen(lv_ui *ui)
{
	//Write codes Login_Screen
	ui->Login_Screen = lv_obj_create(NULL);
	ui->g_kb_Login_Screen = lv_keyboard_create(ui->Login_Screen);
	lv_obj_add_event_cb(ui->g_kb_Login_Screen, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_Login_Screen, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_Login_Screen, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->Login_Screen, 480, 272);
	lv_obj_set_scrollbar_mode(ui->Login_Screen, LV_SCROLLBAR_MODE_OFF);

	//Write style for Login_Screen, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Login_Screen, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Login_Screen, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Login_Screen, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Login_Screen_BAN_IMG
	ui->Login_Screen_BAN_IMG = lv_img_create(ui->Login_Screen);
	lv_obj_add_flag(ui->Login_Screen_BAN_IMG, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Login_Screen_BAN_IMG, &_monkey_alpha_190x195);
	lv_img_set_pivot(ui->Login_Screen_BAN_IMG, 50,50);
	lv_img_set_angle(ui->Login_Screen_BAN_IMG, 0);
	lv_obj_set_pos(ui->Login_Screen_BAN_IMG, 25, 53);
	lv_obj_set_size(ui->Login_Screen_BAN_IMG, 190, 195);

	//Write style for Login_Screen_BAN_IMG, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Login_Screen_BAN_IMG, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Login_Screen_Monkey_IMG
	ui->Login_Screen_Monkey_IMG = lv_img_create(ui->Login_Screen);
	lv_obj_add_flag(ui->Login_Screen_Monkey_IMG, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Login_Screen_Monkey_IMG, &_notallow_alpha_182x189);
	lv_img_set_pivot(ui->Login_Screen_Monkey_IMG, 50,50);
	lv_img_set_angle(ui->Login_Screen_Monkey_IMG, 0);
	lv_obj_set_pos(ui->Login_Screen_Monkey_IMG, 29, 57);
	lv_obj_set_size(ui->Login_Screen_Monkey_IMG, 182, 189);

	//Write style for Login_Screen_Monkey_IMG, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Login_Screen_Monkey_IMG, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Login_Screen_LoginEnter
	ui->Login_Screen_LoginEnter = lv_btn_create(ui->Login_Screen);
	ui->Login_Screen_LoginEnter_label = lv_label_create(ui->Login_Screen_LoginEnter);
	lv_label_set_text(ui->Login_Screen_LoginEnter_label, "Enter");
	lv_label_set_long_mode(ui->Login_Screen_LoginEnter_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Login_Screen_LoginEnter_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Login_Screen_LoginEnter, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->Login_Screen_LoginEnter, 370, 118);
	lv_obj_set_size(ui->Login_Screen_LoginEnter, 76, 29);

	//Write style for Login_Screen_LoginEnter, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Login_Screen_LoginEnter, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Login_Screen_LoginEnter, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Login_Screen_LoginEnter, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Login_Screen_LoginEnter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Login_Screen_LoginEnter, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Login_Screen_LoginEnter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Login_Screen_LoginEnter, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Login_Screen_LoginEnter, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Login_Screen_LoginEnter, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Login_Screen_LoginEnter, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Login_Screen_LoginTitle
	ui->Login_Screen_LoginTitle = lv_label_create(ui->Login_Screen);
	lv_label_set_text(ui->Login_Screen_LoginTitle, "No Monkey is Allowed!!!");
	lv_label_set_long_mode(ui->Login_Screen_LoginTitle, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Login_Screen_LoginTitle, 92, 16);
	lv_obj_set_size(ui->Login_Screen_LoginTitle, 299, 23);

	//Write style for Login_Screen_LoginTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Login_Screen_LoginTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Login_Screen_LoginTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Login_Screen_LoginTitle, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Login_Screen_LoginTitle, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Login_Screen_LoginTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Login_Screen_LoginTitle, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Login_Screen_LoginTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Login_Screen_LoginTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Login_Screen_LoginTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Login_Screen_LoginTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Login_Screen_LoginTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Login_Screen_LoginTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Login_Screen_LoginTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Login_Screen_LoginTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Login_Screen_TA1
	ui->Login_Screen_TA1 = lv_textarea_create(ui->Login_Screen);
	lv_textarea_set_text(ui->Login_Screen_TA1, "");
	lv_textarea_set_placeholder_text(ui->Login_Screen_TA1, "Enter Password");
	lv_textarea_set_password_bullet(ui->Login_Screen_TA1, "*");
	lv_textarea_set_password_mode(ui->Login_Screen_TA1, true);
	lv_textarea_set_one_line(ui->Login_Screen_TA1, "true");
	lv_textarea_set_accepted_chars(ui->Login_Screen_TA1, "");
	lv_textarea_set_max_length(ui->Login_Screen_TA1, 32);
	#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
		lv_obj_add_event_cb(ui->Login_Screen_TA1, ta_event_cb, LV_EVENT_ALL, ui->g_kb_Login_Screen);
	#endif
	lv_obj_set_pos(ui->Login_Screen_TA1, 245, 73);
	lv_obj_set_size(ui->Login_Screen_TA1, 201, 32);

	//Write style for Login_Screen_TA1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Login_Screen_TA1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Login_Screen_TA1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Login_Screen_TA1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Login_Screen_TA1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Login_Screen_TA1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Login_Screen_TA1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Login_Screen_TA1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Login_Screen_TA1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Login_Screen_TA1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Login_Screen_TA1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Login_Screen_TA1, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Login_Screen_TA1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Login_Screen_TA1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Login_Screen_TA1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Login_Screen_TA1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Login_Screen_TA1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Login_Screen_TA1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Login_Screen_TA1, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Login_Screen_TA1, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Login_Screen_TA1, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Login_Screen_TA1, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Login_Screen_TA1, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//The custom code of Login_Screen.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Login_Screen);

	//Init events for screen.
	events_init_Login_Screen(ui);
}
