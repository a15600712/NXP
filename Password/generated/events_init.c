/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"
#include "fsl_debug_console.h"
#if LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void Login_Screen_LoginEnter_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		if(!strcmp(lv_textarea_get_text(guider_ui.Login_Screen_TA1),"admin_123"))
		ui_load_scr_animation(&guider_ui, &guider_ui.SystemControl, guider_ui.SystemControl_del, &guider_ui.Login_Screen_del, setup_scr_SystemControl, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		
		break;
	}
	default:
		break;
	}
}
void events_init_Login_Screen(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Login_Screen_LoginEnter, Login_Screen_LoginEnter_event_handler, LV_EVENT_ALL, NULL);
}
static void SystemControl_SystemSwitch_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_VALUE_CHANGED:
	{
		lv_obj_t * status_obj = lv_event_get_target(e);
		int status = lv_obj_has_state(status_obj, LV_STATE_CHECKED) ? 1 : 0;
		switch(status) {
		case 0:
		{
			
			break;
		}
		case 1:
		{
			
			break;
		}
		default:
			break;
		}
		break;
	}
	default:
		break;
	}
}
static void SystemControl_Unlock_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.UnlockControl, guider_ui.UnlockControl_del, &guider_ui.SystemControl_del, setup_scr_UnlockControl, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
		break;
	}
	default:
		break;
	}
}
static void SystemControl_Logout_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Login_Screen, guider_ui.Login_Screen_del, &guider_ui.SystemControl_del, setup_scr_Login_Screen, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
		break;
	}
	default:
		break;
	}
}
void events_init_SystemControl(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->SystemControl_SystemSwitch, SystemControl_SystemSwitch_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->SystemControl_Unlock, SystemControl_Unlock_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->SystemControl_Logout, SystemControl_Logout_event_handler, LV_EVENT_ALL, NULL);
}
static void UnlockControl_Matrix_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_t * obj = lv_event_get_target(e);
		uint32_t id = lv_btnmatrix_get_selected_btn(obj);
		switch(id) {
		case 0:
		{
			PRINTF("Unlock1\r\n");
			break;
		}
		case 1:
		{
			PRINTF("Unlock2\r\n");
			break;
		}
		case 2:
		{
			PRINTF("Unlock3\r\n");
			break;
		}
		case 3:
		{
			PRINTF("Unlock4\r\n");
			break;
		}
		case 4:
		{
			PRINTF("Unlock5\r\n");
			break;
		}
		case 5:
		{
			PRINTF("Unlock6\r\n");
			break;
		}
		case 6:
		{
			PRINTF("UnlockALL\r\n");
			break;
		}
		default:
			break;
		}
		break;
	}
	default:
		break;
	}
}
static void UnlockControl_PreviousPage_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.SystemControl, guider_ui.SystemControl_del, &guider_ui.UnlockControl_del, setup_scr_SystemControl, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_UnlockControl(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->UnlockControl_Matrix, UnlockControl_Matrix_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->UnlockControl_PreviousPage, UnlockControl_PreviousPage_event_handler, LV_EVENT_ALL, NULL);
}

void events_init(lv_ui *ui)
{

}
