#ifndef __SCREENMNGR_H__
#define __SCREENMNGR_H__

#include "stdafx.h"

#include "AddInNative.h"

class ScreenManager
	: public AddInNative 
{
public:
	ScreenManager() { }
	static std::string GetScreenInfo();
	static std::string GetScreenList();
	static std::string GetDisplayInfo(int64_t window);
	static std::string GetDisplayList(int64_t window);
	BOOL CaptureProcess(VH variant, int64_t pid);
	BOOL CaptureScreen(VH variant, int64_t mode);
	BOOL CaptureWindow(VH variant, HWND window);
public:
	static std::wstring GetCursorPos();
	static BOOL SetCursorPos(int64_t x, int64_t y);
	static BOOL EmulateClick(int64_t button, VH keys);
	static BOOL EmulateDblClick();
	static BOOL EmulateHotkey(VH keys, int64_t flags);
	static BOOL EmulateMouse(int64_t X, int64_t Y, int64_t C, int64_t P);
	static BOOL EmulateWheel(int64_t sign, VH variant);
	static BOOL EmulateText(const std::wstring& text, int64_t pause);
};

#endif //__SCREENMNGR_H__
