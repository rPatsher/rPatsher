#ifndef CONTROL_H
#define CONTROL_H


#include "core/object/m_object.h"
#include "core/object/ref_counted.h"
#include "core/math/rect2.h"
#include "core/math/size2.h" 
#include "core/variant/array.h"
#include "scene/main/node.h"
#include "scene/main/timer.h" 


class Control : public Node {
    CLASS(Control , Node);

public:
	enum Anchor {
		ANCHOR_BEGIN = 0,
		ANCHOR_END = 1
	};

	enum GrowDirection {
		GROW_DIRECTION_BEGIN,
		GROW_DIRECTION_END,
		GROW_DIRECTION_BOTH
	};

	enum FocusMode {
		FOCUS_NONE,
		FOCUS_CLICK,
		FOCUS_ALL
	};

	enum SizeFlags {
		SIZE_SHRINK_BEGIN = 0,
		SIZE_FILL = 1,
		SIZE_EXPAND = 2,
		SIZE_SHRINK_CENTER = 4,
		SIZE_SHRINK_END = 8,

		SIZE_EXPAND_FILL = SIZE_EXPAND | SIZE_FILL,
	};

	enum MouseFilter {
		MOUSE_FILTER_STOP,
		MOUSE_FILTER_PASS,
		MOUSE_FILTER_IGNORE
	};

	enum CursorShape {
		CURSOR_ARROW,
		CURSOR_IBEAM,
		CURSOR_POINTING_HAND,
		CURSOR_CROSS,
		CURSOR_WAIT,
		CURSOR_BUSY,
		CURSOR_DRAG,
		CURSOR_CAN_DROP,
		CURSOR_FORBIDDEN,
		CURSOR_VSIZE,
		CURSOR_HSIZE,
		CURSOR_BDIAGSIZE,
		CURSOR_FDIAGSIZE,
		CURSOR_MOVE,
		CURSOR_VSPLIT,
		CURSOR_HSPLIT,
		CURSOR_HELP,
		CURSOR_MAX
	};

	enum LayoutPreset {
		PRESET_TOP_LEFT,
		PRESET_TOP_RIGHT,
		PRESET_BOTTOM_LEFT,
		PRESET_BOTTOM_RIGHT,
		PRESET_CENTER_LEFT,
		PRESET_CENTER_TOP,
		PRESET_CENTER_RIGHT,
		PRESET_CENTER_BOTTOM,
		PRESET_CENTER,
		PRESET_LEFT_WIDE,
		PRESET_TOP_WIDE,
		PRESET_RIGHT_WIDE,
		PRESET_BOTTOM_WIDE,
		PRESET_VCENTER_WIDE,
		PRESET_HCENTER_WIDE,
		PRESET_FULL_RECT
	};

	enum LayoutPresetMode {
		PRESET_MODE_MINSIZE,
		PRESET_MODE_KEEP_WIDTH,
		PRESET_MODE_KEEP_HEIGHT,
		PRESET_MODE_KEEP_SIZE
	};

	enum LayoutMode {
		LAYOUT_MODE_POSITION,
		LAYOUT_MODE_ANCHORS,
		LAYOUT_MODE_CONTAINER,
		LAYOUT_MODE_UNCONTROLLED,
	};

	enum LayoutDirection {
		LAYOUT_DIRECTION_INHERITED,
		LAYOUT_DIRECTION_LOCALE,
		LAYOUT_DIRECTION_LTR,
		LAYOUT_DIRECTION_RTL
	};




};








#endif // CONTROL_H