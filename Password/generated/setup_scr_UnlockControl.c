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



void setup_scr_UnlockControl(lv_ui *ui)
{
	//Write codes UnlockControl
	ui->UnlockControl = lv_obj_create(NULL);
	ui->g_kb_UnlockControl = lv_keyboard_create(ui->UnlockControl);
	lv_obj_add_event_cb(ui->g_kb_UnlockControl, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_UnlockControl, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_UnlockControl, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->UnlockControl, 480, 272);
	lv_obj_set_scrollbar_mode(ui->UnlockControl, LV_SCROLLBAR_MODE_OFF);

	//Write style for UnlockControl, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->UnlockControl, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->UnlockControl, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->UnlockControl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes UnlockControl_Matrix
	ui->UnlockControl_Matrix = lv_btnmatrix_create(ui->UnlockControl);
	static const char *UnlockControl_Matrix_text_map[] = {"1", "2", "3", "\n", "4", "5", "6", "\n", "All", "",};
	lv_btnmatrix_set_map(ui->UnlockControl_Matrix, UnlockControl_Matrix_text_map);
	lv_obj_set_pos(ui->UnlockControl_Matrix, 132, 41);
	lv_obj_set_size(ui->UnlockControl_Matrix, 224, 181);

	//Write style for UnlockControl_Matrix, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->UnlockControl_Matrix, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->UnlockControl_Matrix, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->UnlockControl_Matrix, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->UnlockControl_Matrix, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->UnlockControl_Matrix, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_row(ui->UnlockControl_Matrix, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_column(ui->UnlockControl_Matrix, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->UnlockControl_Matrix, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->UnlockControl_Matrix, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for UnlockControl_Matrix, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->UnlockControl_Matrix, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->UnlockControl_Matrix, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->UnlockControl_Matrix, lv_color_hex(0xc9c9c9), LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->UnlockControl_Matrix, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->UnlockControl_Matrix, lv_color_hex(0xfafafa), LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->UnlockControl_Matrix, &lv_font_Alatsi_Regular_24, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->UnlockControl_Matrix, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->UnlockControl_Matrix, 27, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->UnlockControl_Matrix, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->UnlockControl_Matrix, lv_color_hex(0x91b5fe), LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->UnlockControl_Matrix, LV_GRAD_DIR_HOR, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->UnlockControl_Matrix, lv_color_hex(0x0c5681), LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->UnlockControl_Matrix, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->UnlockControl_Matrix, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->UnlockControl_Matrix, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->UnlockControl_Matrix, lv_color_hex(0x090a0a), LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->UnlockControl_Matrix, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->UnlockControl_Matrix, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->UnlockControl_Matrix, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->UnlockControl_Matrix, 2, LV_PART_ITEMS|LV_STATE_DEFAULT);

	//Write codes UnlockControl_PreviousPage
	ui->UnlockControl_PreviousPage = lv_btn_create(ui->UnlockControl);
	ui->UnlockControl_PreviousPage_label = lv_label_create(ui->UnlockControl_PreviousPage);
	lv_label_set_text(ui->UnlockControl_PreviousPage_label, "");
	lv_label_set_long_mode(ui->UnlockControl_PreviousPage_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->UnlockControl_PreviousPage_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->UnlockControl_PreviousPage, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->UnlockControl_PreviousPage, 13, 9);
	lv_obj_set_size(ui->UnlockControl_PreviousPage, 32, 32);

	//Write style for UnlockControl_PreviousPage, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->UnlockControl_PreviousPage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->UnlockControl_PreviousPage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->UnlockControl_PreviousPage, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->UnlockControl_PreviousPage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->UnlockControl_PreviousPage, &_arrow_32x32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->UnlockControl_PreviousPage, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->UnlockControl_PreviousPage, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->UnlockControl_PreviousPage, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->UnlockControl_PreviousPage, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->UnlockControl_PreviousPage, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of UnlockControl.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->UnlockControl);

	//Init events for screen.
	events_init_UnlockControl(ui);
}
