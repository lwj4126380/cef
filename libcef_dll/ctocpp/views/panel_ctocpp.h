// Copyright (c) 2021 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=c2d630805de3dbcb47933c566b791c0e2fb7e6d7$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_VIEWS_PANEL_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_VIEWS_PANEL_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/views/cef_box_layout_capi.h"
#include "include/capi/views/cef_fill_layout_capi.h"
#include "include/capi/views/cef_layout_capi.h"
#include "include/capi/views/cef_panel_capi.h"
#include "include/capi/views/cef_window_capi.h"
#include "include/views/cef_box_layout.h"
#include "include/views/cef_fill_layout.h"
#include "include/views/cef_layout.h"
#include "include/views/cef_panel.h"
#include "include/views/cef_window.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefPanelCToCpp
    : public CefCToCppRefCounted<CefPanelCToCpp, CefPanel, cef_panel_t> {
 public:
  CefPanelCToCpp();
  virtual ~CefPanelCToCpp();

  // CefPanel methods.
  CefRefPtr<CefWindow> AsWindow() override;
  CefRefPtr<CefFillLayout> SetToFillLayout() override;
  CefRefPtr<CefBoxLayout> SetToBoxLayout(
      const CefBoxLayoutSettings& settings) override;
  CefRefPtr<CefLayout> GetLayout() override;
  void Layout() override;
  void AddChildView(CefRefPtr<CefView> view) override;
  void AddChildViewAt(CefRefPtr<CefView> view, int index) override;
  void ReorderChildView(CefRefPtr<CefView> view, int index) override;
  void RemoveChildView(CefRefPtr<CefView> view) override;
  void RemoveAllChildViews() override;
  size_t GetChildViewCount() override;
  CefRefPtr<CefView> GetChildViewAt(int index) override;

  // CefView methods.
  CefRefPtr<CefBrowserView> AsBrowserView() override;
  CefRefPtr<CefButton> AsButton() override;
  CefRefPtr<CefPanel> AsPanel() override;
  CefRefPtr<CefScrollView> AsScrollView() override;
  CefRefPtr<CefTextfield> AsTextfield() override;
  CefString GetTypeString() override;
  CefString ToString(bool include_children) override;
  bool IsValid() override;
  bool IsAttached() override;
  bool IsSame(CefRefPtr<CefView> that) override;
  CefRefPtr<CefViewDelegate> GetDelegate() override;
  CefRefPtr<CefWindow> GetWindow() override;
  int GetID() override;
  void SetID(int id) override;
  int GetGroupID() override;
  void SetGroupID(int group_id) override;
  CefRefPtr<CefView> GetParentView() override;
  CefRefPtr<CefView> GetViewForID(int id) override;
  void SetBounds(const CefRect& bounds) override;
  CefRect GetBounds() override;
  CefRect GetBoundsInScreen() override;
  void SetSize(const CefSize& size) override;
  CefSize GetSize() override;
  void SetPosition(const CefPoint& position) override;
  CefPoint GetPosition() override;
  CefSize GetPreferredSize() override;
  void SizeToPreferredSize() override;
  CefSize GetMinimumSize() override;
  CefSize GetMaximumSize() override;
  int GetHeightForWidth(int width) override;
  void InvalidateLayout() override;
  void SetVisible(bool visible) override;
  bool IsVisible() override;
  bool IsDrawn() override;
  void SetEnabled(bool enabled) override;
  bool IsEnabled() override;
  void SetFocusable(bool focusable) override;
  bool IsFocusable() override;
  bool IsAccessibilityFocusable() override;
  void RequestFocus() override;
  void SetBackgroundColor(cef_color_t color) override;
  cef_color_t GetBackgroundColor() override;
  bool ConvertPointToScreen(CefPoint& point) override;
  bool ConvertPointFromScreen(CefPoint& point) override;
  bool ConvertPointToWindow(CefPoint& point) override;
  bool ConvertPointFromWindow(CefPoint& point) override;
  bool ConvertPointToView(CefRefPtr<CefView> view, CefPoint& point) override;
  bool ConvertPointFromView(CefRefPtr<CefView> view, CefPoint& point) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_VIEWS_PANEL_CTOCPP_H_
