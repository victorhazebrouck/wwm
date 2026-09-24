#include <Windows.h>
#include <assert.h>
#include <stddef.h>
#include <stdint.h>

//
// User Configuration Types
//

typedef void (*WWMAction)();
void WWMAction_Undefinded();
void WWMAction_GoToWorkspace1();
void WWMAction_GoToWorkspace2();
void WWMAction_GoToWorkspace3();
void WWMAction_GoToWorkspace4();
void WWMAction_GoToWorkspace5();
void WWMAction_GoToWorkspace6();
void WWMAction_GoToWorkspace7();
void WWMAction_GoToWorkspace8();
void WWMAction_GoToWorkspace9();
void WWMAction_GoToWorkspace10();
void WWMAction_FocusedWinMoveToWorkspace1();
void WWMAction_FocusedWinMoveToWorkspace2();
void WWMAction_FocusedWinMoveToWorkspace3();
void WWMAction_FocusedWinMoveToWorkspace4();
void WWMAction_FocusedWinMoveToWorkspace5();
void WWMAction_FocusedWinMoveToWorkspace6();
void WWMAction_FocusedWinMoveToWorkspace7();
void WWMAction_FocusedWinMoveToWorkspace8();
void WWMAction_FocusedWinMoveToWorkspace9();
void WWMAction_FocusedWinMoveToWorkspace10();
void WWMAction_FocusedWinMoveUp();
void WWMAction_FocusedWinMoveDown();
void WWMAction_FocusedWinMoveLeft();
void WWMAction_FocusedWinMoveRight();
void WWMAction_FocusedWinDestroy();
void WWMAction_FocusUp();
void WWMAction_FocusDown();
void WWMAction_FocusLeft();
void WWMAction_FocusRight();
void WWMAction_FocusedWorkspaceToTabbed();
void WWMAction_FocusedWorkspaceToVertical();
void WWMAction_FocusedWorkspaceToHorizontal();
void WWMAction_FocusedWorkspaceToggleHorizontalVertical();

typedef enum WWMKeyCode {
    WWMKeyCode_Undefined = 0,

    WWMKeyCode_A = 'A',
    WWMKeyCode_B = 'B',
    WWMKeyCode_C = 'C',
    WWMKeyCode_D = 'D',
    WWMKeyCode_E = 'E',
    WWMKeyCode_F = 'F',
    WWMKeyCode_G = 'G',
    WWMKeyCode_H = 'H',
    WWMKeyCode_I = 'I',
    WWMKeyCode_J = 'J',
    WWMKeyCode_K = 'K',
    WWMKeyCode_L = 'L',
    WWMKeyCode_M = 'M',
    WWMKeyCode_N = 'N',
    WWMKeyCode_O = 'O',
    WWMKeyCode_P = 'P',
    WWMKeyCode_Q = 'Q',
    WWMKeyCode_R = 'R',
    WWMKeyCode_S = 'S',
    WWMKeyCode_T = 'T',
    WWMKeyCode_U = 'U',
    WWMKeyCode_V = 'V',
    WWMKeyCode_W = 'W',
    WWMKeyCode_X = 'X',
    WWMKeyCode_Y = 'Y',
    WWMKeyCode_Z = 'Z',

    WWMKeyCode_0 = '0',
    WWMKeyCode_1 = '1',
    WWMKeyCode_2 = '2',
    WWMKeyCode_3 = '3',
    WWMKeyCode_4 = '4',
    WWMKeyCode_5 = '5',
    WWMKeyCode_6 = '6',
    WWMKeyCode_7 = '7',
    WWMKeyCode_8 = '8',
    WWMKeyCode_9 = '9',

    WWMKeyCode_ESCAPE = VK_ESCAPE,
    WWMKeyCode_TAB = VK_TAB,
    WWMKeyCode_CAPSLOCK = VK_CAPITAL,
    WWMKeyCode_SHIFT = VK_SHIFT,
    WWMKeyCode_LSHIFT = VK_LSHIFT,
    WWMKeyCode_RSHIFT = VK_RSHIFT,
    WWMKeyCode_CONTROL = VK_CONTROL,
    WWMKeyCode_LCONTROL = VK_LCONTROL,
    WWMKeyCode_RCONTROL = VK_RCONTROL,
    WWMKeyCode_ALT = VK_MENU,
    WWMKeyCode_LALT = VK_LMENU,
    WWMKeyCode_RALT = VK_RMENU,
    WWMKeyCode_SPACE = VK_SPACE,
    WWMKeyCode_ENTER = VK_RETURN,
    WWMKeyCode_BACKSPACE = VK_BACK,

    WWMKeyCode_INSERT = VK_INSERT,
    WWMKeyCode_DELETE = VK_DELETE,
    WWMKeyCode_HOME = VK_HOME,
    WWMKeyCode_END = VK_END,
    WWMKeyCode_PAGEUP = VK_PRIOR,
    WWMKeyCode_PAGEDOWN = VK_NEXT,

    WWMKeyCode_LEFT = VK_LEFT,
    WWMKeyCode_RIGHT = VK_RIGHT,
    WWMKeyCode_UP = VK_UP,
    WWMKeyCode_DOWN = VK_DOWN,

    WWMKeyCode_F1 = VK_F1,
    WWMKeyCode_F2 = VK_F2,
    WWMKeyCode_F3 = VK_F3,
    WWMKeyCode_F4 = VK_F4,
    WWMKeyCode_F5 = VK_F5,
    WWMKeyCode_F6 = VK_F6,
    WWMKeyCode_F7 = VK_F7,
    WWMKeyCode_F8 = VK_F8,
    WWMKeyCode_F9 = VK_F9,
    WWMKeyCode_F10 = VK_F10,
    WWMKeyCode_F11 = VK_F11,
    WWMKeyCode_F12 = VK_F12,

    WWMKeyCode_OEM_1 = VK_OEM_1, // ;:
    WWMKeyCode_OEM_PLUS = VK_OEM_PLUS,
    WWMKeyCode_OEM_COMMA = VK_OEM_COMMA,
    WWMKeyCode_OEM_MINUS = VK_OEM_MINUS,
    WWMKeyCode_OEM_PERIOD = VK_OEM_PERIOD,
    WWMKeyCode_OEM_2 = VK_OEM_2, // /?
    WWMKeyCode_OEM_3 = VK_OEM_3, // `~
    WWMKeyCode_OEM_4 = VK_OEM_4, // [{
    WWMKeyCode_OEM_5 = VK_OEM_5, // \|
    WWMKeyCode_OEM_6 = VK_OEM_6, // ]}
    WWMKeyCode_OEM_7 = VK_OEM_7, // '"

    WWMKeyCode_NUMLOCK = VK_NUMLOCK,
    WWMKeyCode_SCROLLLOCK = VK_SCROLL,

    WWMKeyCode_NUMPAD0 = VK_NUMPAD0,
    WWMKeyCode_NUMPAD1 = VK_NUMPAD1,
    WWMKeyCode_NUMPAD2 = VK_NUMPAD2,
    WWMKeyCode_NUMPAD3 = VK_NUMPAD3,
    WWMKeyCode_NUMPAD4 = VK_NUMPAD4,
    WWMKeyCode_NUMPAD5 = VK_NUMPAD5,
    WWMKeyCode_NUMPAD6 = VK_NUMPAD6,
    WWMKeyCode_NUMPAD7 = VK_NUMPAD7,
    WWMKeyCode_NUMPAD8 = VK_NUMPAD8,
    WWMKeyCode_NUMPAD9 = VK_NUMPAD9,
    WWMKeyCode_MULTIPLY = VK_MULTIPLY,
    WWMKeyCode_ADD = VK_ADD,
    WWMKeyCode_SEPARATOR = VK_SEPARATOR,
    WWMKeyCode_SUBTRACT = VK_SUBTRACT,
    WWMKeyCode_DECIMAL = VK_DECIMAL,
    WWMKeyCode_DIVIDE = VK_DIVIDE,

    WWMKeyCode_LWIN = VK_LWIN,
    WWMKeyCode_RWIN = VK_RWIN,
    WWMKeyCode_APPS = VK_APPS,
} WWMKeyCode;

typedef struct WWMKeyRemap {
    WWMKeyCode key_original;
    WWMKeyCode key_new;
} WWMKeyRemap;

typedef struct WWMKeyAction {
    WWMKeyCode key;
    WWMAction action;
} WWMKeyAction;

typedef struct WWMConfig {
    WWMKeyCode mod1_key;
    WWMKeyCode mod2_key;
} WWMConfig;

//
// User Configuration (Do not rename variables)
//

static const WWMKeyRemap KEY_REMAPS[] = {
    {.key_original = WWMKeyCode_RSHIFT, .key_new = WWMKeyCode_END},
    {.key_original = WWMKeyCode_RALT, .key_new = WWMKeyCode_HOME},
};
static const WWMKeyAction KEY_PRIMARY_ACTIONS[] = {
    {.key = WWMKeyCode_1, .action = WWMAction_GoToWorkspace1},
    {.key = WWMKeyCode_2, .action = WWMAction_GoToWorkspace2},
    {.key = WWMKeyCode_3, .action = WWMAction_GoToWorkspace3},
    {.key = WWMKeyCode_4, .action = WWMAction_GoToWorkspace4},
    {.key = WWMKeyCode_5, .action = WWMAction_GoToWorkspace5},
    {.key = WWMKeyCode_6, .action = WWMAction_GoToWorkspace6},
    {.key = WWMKeyCode_7, .action = WWMAction_GoToWorkspace7},
    {.key = WWMKeyCode_8, .action = WWMAction_GoToWorkspace8},
    {.key = WWMKeyCode_9, .action = WWMAction_GoToWorkspace9},
    {.key = WWMKeyCode_0, .action = WWMAction_GoToWorkspace10},
    {.key = WWMKeyCode_UP, .action = WWMAction_FocusUp},
    {.key = WWMKeyCode_DOWN, .action = WWMAction_FocusDown},
    {.key = WWMKeyCode_LEFT, .action = WWMAction_FocusLeft},
    {.key = WWMKeyCode_RIGHT, .action = WWMAction_FocusRight},
    {.key = WWMKeyCode_W, .action = WWMAction_FocusedWorkspaceToTabbed},
    {.key = WWMKeyCode_E, .action = WWMAction_FocusedWorkspaceToggleHorizontalVertical},
};
static const WWMKeyAction KEY_SECONDARY_ACTIONS[] = {
    {.key = WWMKeyCode_1, .action = WWMAction_FocusedWinMoveToWorkspace1},
    {.key = WWMKeyCode_2, .action = WWMAction_FocusedWinMoveToWorkspace2},
    {.key = WWMKeyCode_3, .action = WWMAction_FocusedWinMoveToWorkspace3},
    {.key = WWMKeyCode_4, .action = WWMAction_FocusedWinMoveToWorkspace4},
    {.key = WWMKeyCode_5, .action = WWMAction_FocusedWinMoveToWorkspace5},
    {.key = WWMKeyCode_6, .action = WWMAction_FocusedWinMoveToWorkspace6},
    {.key = WWMKeyCode_7, .action = WWMAction_FocusedWinMoveToWorkspace7},
    {.key = WWMKeyCode_8, .action = WWMAction_FocusedWinMoveToWorkspace8},
    {.key = WWMKeyCode_9, .action = WWMAction_FocusedWinMoveToWorkspace9},
    {.key = WWMKeyCode_0, .action = WWMAction_FocusedWinMoveToWorkspace10},
    {.key = WWMKeyCode_UP, .action = WWMAction_FocusedWinMoveUp},
    {.key = WWMKeyCode_DOWN, .action = WWMAction_FocusedWinMoveDown},
    {.key = WWMKeyCode_LEFT, .action = WWMAction_FocusedWinMoveLeft},
    {.key = WWMKeyCode_RIGHT, .action = WWMAction_FocusedWinMoveRight},
    {.key = WWMKeyCode_Q, .action = WWMAction_FocusedWinDestroy},
};
static const WWMConfig CONFIG = {
    // If pressed alone will dispatch next key to KEY_PRIMARY_ACTIONS
    .mod1_key = WWMKeyCode_CAPSLOCK,

    // If pressed with mod1 will dispatch next key to KEY_SECONDARY_ACTIONS
    .mod2_key = WWMKeyCode_LSHIFT,
};

//
// Impl Utils
//

typedef enum WWMBool {
    WWMBool_False = 0,
    WWMBool_True,
} WWMBool;

//
// Impl Keyboard event
//

typedef enum WWMPropagateEvent {
    WWMPropagateEvent_Stop = 0,
    WWMPropagateEvent_Continue,
} WWMPropagateEvent;

typedef enum WWMKeyState {
    WWMKeyState_Down = 0,
    WWMKeyState_Up,
} WWMKeyState;

static WWMBool IS_MOD1_PRESSED = WWMBool_False;
static WWMBool IS_MOD2_PRESSED = WWMBool_False;

void wwm_kb_map_keycode_to_primary_action(WWMKeyCode key_code)
{
    const size_t size = sizeof(KEY_PRIMARY_ACTIONS) / sizeof(WWMKeyAction);
    for (size_t i = 0; i < size; ++i) {
        if (KEY_PRIMARY_ACTIONS[i].key == key_code) {
            KEY_PRIMARY_ACTIONS[i].action();
            return;
        }
    }
}
void wwm_kb_map_keycode_to_secondary_action(WWMKeyCode key_code)
{
    const size_t size = sizeof(KEY_SECONDARY_ACTIONS) / sizeof(WWMKeyAction);
    for (size_t i = 0; i < size; ++i) {
        if (KEY_SECONDARY_ACTIONS[i].key == key_code) {
            KEY_SECONDARY_ACTIONS[i].action();
            return;
        }
    }
}
WWMPropagateEvent wwm_kb_handle_keydown(WWMKeyCode key_code)
{
    IS_MOD1_PRESSED = CONFIG.mod1_key == key_code || IS_MOD1_PRESSED;
    IS_MOD2_PRESSED = CONFIG.mod2_key == key_code || IS_MOD2_PRESSED;
    if (IS_MOD1_PRESSED == WWMBool_False) {
        return WWMPropagateEvent_Continue;
    }
    if (IS_MOD2_PRESSED) {
        wwm_kb_map_keycode_to_secondary_action(key_code);
    } else {
        wwm_kb_map_keycode_to_primary_action(key_code);
    }
    return WWMPropagateEvent_Stop;
}
WWMPropagateEvent wwm_kb_handle_keyup(WWMKeyCode key_code)
{
    IS_MOD1_PRESSED = CONFIG.mod1_key == key_code ? WWMBool_False : IS_MOD1_PRESSED;
    IS_MOD2_PRESSED = CONFIG.mod2_key == key_code ? WWMBool_False : IS_MOD2_PRESSED;
    if (key_code == CONFIG.mod1_key) {
        return WWMPropagateEvent_Stop;
    }
    return WWMPropagateEvent_Continue;
}
WWMPropagateEvent wwm_kb_remap_key(WWMKeyState key_state, WWMKeyCode key_code)
{
    const size_t size = sizeof(KEY_REMAPS) / sizeof(WWMKeyRemap);
    for (size_t i = 0; i < size; ++i) {
        if (KEY_REMAPS[i].key_original == key_code) {
            const DWORD extra_dw_flag = key_state == WWMKeyState_Up ? KEYEVENTF_KEYUP : 0;
            INPUT input = {
                .type = INPUT_KEYBOARD,
                .ki.wVk = KEY_REMAPS[i].key_new,
                .ki.dwFlags = KEYEVENTF_EXTENDEDKEY | extra_dw_flag,
            };
            SendInput(1, &input, sizeof(INPUT));
            return WWMPropagateEvent_Stop;
        }
    }
    return WWMPropagateEvent_Continue;
}
LRESULT wwm_kb_stop_event_propagation()
{
    return 1;
}
LRESULT CALLBACK wwm_kb_event_proc(int n_code, WPARAM w_param, LPARAM l_param)
{
    if (n_code != HC_ACTION) {
        return CallNextHookEx(NULL, n_code, w_param, l_param);
    }

    const KBDLLHOOKSTRUCT *info = (const KBDLLHOOKSTRUCT *)l_param;
    const WWMKeyCode key_code = info->vkCode;

    switch (w_param) {
    case WM_SYSKEYDOWN:
    case WM_KEYDOWN:
        return wwm_kb_remap_key(WWMKeyState_Down, key_code) && wwm_kb_handle_keydown(key_code)
            ? CallNextHookEx(NULL, n_code, w_param, l_param)
            : wwm_kb_stop_event_propagation();
    case WM_SYSKEYUP:
    case WM_KEYUP:
        return wwm_kb_remap_key(WWMKeyState_Up, key_code) && wwm_kb_handle_keyup(key_code)
            ? CallNextHookEx(NULL, n_code, w_param, l_param)
            : wwm_kb_stop_event_propagation();
    default:
        return CallNextHookEx(NULL, n_code, w_param, l_param);
    }
}

//
// Impl HWND utils
//

WWMBool wwm_hwnd_is_real(HWND hwnd)
{
    if (!hwnd || !IsWindow(hwnd)) {
        return WWMBool_False;
    }
    if (GetWindow(hwnd, GW_OWNER)) {
        return WWMBool_False;
    }
    if (GetParent(hwnd)) {
        return WWMBool_False;
    }
    if (!IsWindowVisible(hwnd)) {
        return WWMBool_False;
    }
    const LONG ex_style = GetWindowLong(hwnd, GWL_EXSTYLE);
    if (ex_style & WS_EX_TOOLWINDOW) {
        return WWMBool_False;
    }
    char class_name[30];
    const int class_name_len = GetClassNameA(hwnd, class_name, sizeof(class_name));
    char title[30];
    const int title_len = GetWindowTextA(hwnd, title, sizeof(title));

    if (!class_name_len || !title_len) {
        return WWMBool_False;
    }
    if (!strcmp(class_name, "ApplicationFrameWindow")) {
        return WWMBool_False;
    }
    if (!strcmp(class_name, "Windows.UI.Core.CoreWindow")) {
        return WWMBool_False;
    }
    if (!strcmp(class_name, "XamlExplorerHostIslandWindow")) {
        return WWMBool_False;
    }
    return WWMBool_True;
}
void wwm_hwnd_focus(HWND hwnd)
{
    if (IsIconic(hwnd)) {
        ShowWindow(hwnd, SW_RESTORE);
    } else {
        ShowWindow(hwnd, SW_SHOW);
    }

    const HWND foreground = GetForegroundWindow();
    const DWORD current_thread = GetCurrentThreadId();
    const DWORD target_thread = GetWindowThreadProcessId(hwnd, NULL);
    const DWORD foreground_thread = GetWindowThreadProcessId(foreground, NULL);

    AttachThreadInput(current_thread, target_thread, TRUE);
    AttachThreadInput(current_thread, foreground_thread, TRUE);

    SetForegroundWindow(hwnd);
    SetFocus(hwnd);
    BringWindowToTop(hwnd);
    SetActiveWindow(hwnd);

    AttachThreadInput(current_thread, target_thread, FALSE);
    AttachThreadInput(current_thread, foreground_thread, FALSE);
}
void wwm_hwnd_close(HWND hwnd)
{
    SendMessage(hwnd, WM_CLOSE, 0, 0);
}
void wwm_hwnd_minimize(HWND hwnd)
{
    ShowWindow(hwnd, SW_MINIMIZE);
}
void wwm_hwnd_make_windowed(HWND hwnd)
{
    if (IsIconic(hwnd)) {
        ShowWindow(hwnd, SW_RESTORE);
    } else {
        ShowWindow(hwnd, SW_SHOW);
    }
}
typedef struct WWMHwndSetPosParams {
    HWND hwnd;
    int x, y;
    int width, height;
} WWMHwndSetPosParams;
void wwm_hwnd_set_pos(WWMHwndSetPosParams params)
{
    wwm_hwnd_make_windowed(params.hwnd);

    RECT win_rect = {0};
    GetWindowRect(params.hwnd, &win_rect);
    RECT client_rect = {0};
    GetClientRect(params.hwnd, &client_rect);
    POINT client_origin = {0};
    ClientToScreen(params.hwnd, &client_origin);

    const int offset_x = client_origin.x - win_rect.left;
    const int offset_y = client_origin.y - win_rect.top;

    const int window_width = win_rect.right - win_rect.left;
    const int window_height = win_rect.bottom - win_rect.top;

    const int client_width = client_rect.right - client_rect.left;
    const int client_height = client_rect.bottom - client_rect.top;

    const int extra_width = window_width - client_width;
    const int extra_height = window_height - client_height;

    const int new_window_x = params.x - offset_x;
    const int new_window_y = params.y - offset_y;
    const int new_window_width = params.width + extra_width;
    const int new_window_height = params.height + extra_height;

    SetWindowPos(
        /*hWnd=*/params.hwnd,
        /*hWndInsertAfter=*/NULL,
        /*X=*/0,
        /*Y=*/0,
        /*cx=*/new_window_width,
        /*cy=*/new_window_height,
        /*uFlags=*/SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);
    SetWindowPos(
        /*hWnd=*/params.hwnd,
        /*hWndInsertAfter=*/NULL,
        /*X=*/new_window_x,
        /*Y=*/new_window_y,
        /*cx=*/0,
        /*cy=*/0,
        /*uFlags=*/SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE);
}
void wwm_hwnd_maximize(HWND hwnd)
{
    wwm_hwnd_set_pos((WWMHwndSetPosParams){
        .hwnd = hwnd,
        .x = 0,
        .y = 0,
        .width = GetSystemMetrics(SM_CXSCREEN),
        .height = GetSystemMetrics(SM_CYSCREEN),
    });
}
void wwm_hwnd_make_horizontal_section(HWND hwnd, uint16_t index, int nb_windows)
{
    const int screen_width = GetSystemMetrics(SM_CXSCREEN);
    const int screen_height = GetSystemMetrics(SM_CYSCREEN);
    const int section_width = screen_width / nb_windows;
    wwm_hwnd_set_pos((WWMHwndSetPosParams){
        .hwnd = hwnd,
        .x = section_width * index,
        .y = 0,
        .width = section_width,
        .height = screen_height,
    });
}
void wwm_hwnd_make_vertical_section(HWND hwnd, uint16_t index, int nb_windows)
{
    const int screen_width = GetSystemMetrics(SM_CXSCREEN);
    const int screen_height = GetSystemMetrics(SM_CYSCREEN);
    const int section_height = screen_height / nb_windows;
    wwm_hwnd_set_pos((WWMHwndSetPosParams){
        .hwnd = hwnd,
        .x = 0,
        .y = section_height * index,
        .width = screen_width,
        .height = section_height,
    });
}

//
// Impl Workspace
//

#define WWM_WINDOWS_ARRAY_CAPACITY 100

typedef enum WWMPresentationMode {
    WWMPresentationMode_Horizontal = 0,
    WWMPresentationMode_Vertical,
    WWMPresentationMode_Tabbed,
} WWMPresentationMode;

typedef struct WWMWorkspace {
    HWND windows_arr[WWM_WINDOWS_ARRAY_CAPACITY];
    uint16_t windows_arr_size;
    uint16_t curr_window_i;
    WWMPresentationMode presentation_mode;
} WWMWorkspace;

void wwm_workspace_remove_window_i(WWMWorkspace *workspace, uint16_t index)
{
    assert(index < WWM_WINDOWS_ARRAY_CAPACITY);
    assert(index < workspace->windows_arr_size);
    assert(workspace->windows_arr_size > 0);

    for (uint16_t rhs = index + 1, lhs = index; rhs < workspace->windows_arr_size; ++rhs, ++lhs) {
        workspace->windows_arr[lhs] = workspace->windows_arr[rhs];
    }
    --workspace->windows_arr_size;
}
void wwm_workspace_remove_window_ref(WWMWorkspace *workspace, HWND hwnd)
{
    for (uint16_t i = 0; i < workspace->windows_arr_size; ++i) {
        if (workspace->windows_arr[i] == hwnd) {
            wwm_workspace_remove_window_i(workspace, i);
            workspace->curr_window_i = 0;
        }
    }
}
uint16_t wwm_workspace_add_window(WWMWorkspace *workspace, HWND hwnd)
{
    assert(workspace->windows_arr_size + 1 < WWM_WINDOWS_ARRAY_CAPACITY);

    const uint16_t position = workspace->windows_arr_size;
    workspace->windows_arr[position] = hwnd;
    ++workspace->windows_arr_size;
    return position;
}
WWMBool wwm_workspace_has_window(WWMWorkspace *workspace, HWND hwnd)
{
    for (uint16_t i = 0; i < workspace->windows_arr_size; ++i) {
        if (workspace->windows_arr[i] == hwnd) {
            return WWMBool_True;
        }
    }
    return WWMBool_False;
}
WWMBool wwm_workspace_is_empty(WWMWorkspace *workspace)
{
    return workspace->windows_arr_size == 0;
}
HWND wwm_workspace_get_window_i(WWMWorkspace *workspace, uint16_t index)
{
    assert(index < WWM_WINDOWS_ARRAY_CAPACITY);
    assert(index < workspace->windows_arr_size);
    assert(workspace->windows_arr_size > 0);

    return workspace->windows_arr[index];
}
void wwm_workspace_set_window_focused_i(WWMWorkspace *workspace, uint16_t index)
{
    assert(index < WWM_WINDOWS_ARRAY_CAPACITY);
    assert(index < workspace->windows_arr_size);
    assert(workspace->windows_arr_size > 0);

    workspace->curr_window_i = index;
}
uint16_t wwm_workspace_get_next_window_index(WWMWorkspace *workspace)
{
    assert(workspace->windows_arr_size > 0);

    const uint16_t max_index = workspace->windows_arr_size - 1;
    const uint16_t curr_index = workspace->curr_window_i;
    const uint16_t next_index = workspace->curr_window_i + 1;
    const uint16_t new_index = curr_index == max_index ? max_index : next_index;
    return new_index;
}
uint16_t wwm_workspace_get_prev_window_index(WWMWorkspace *workspace)
{
    assert(workspace->windows_arr_size > 0);

    const uint16_t min_index = 0;
    const uint16_t curr_index = workspace->curr_window_i;
    const uint16_t prev_index = workspace->curr_window_i - 1;
    const uint16_t new_index = curr_index == min_index ? min_index : prev_index;
    return new_index;
}
void wwm_workspace_swap_focused_with_next_window(WWMWorkspace *workspace)
{
    assert(workspace->windows_arr_size > 0);

    const uint16_t curr_index = workspace->curr_window_i;
    const uint16_t next_index = wwm_workspace_get_next_window_index(workspace);
    if (curr_index != next_index) {
        const HWND curr_win = wwm_workspace_get_window_i(workspace, curr_index);
        const HWND next_win = wwm_workspace_get_window_i(workspace, next_index);
        workspace->windows_arr[curr_index] = next_win;
        workspace->windows_arr[next_index] = curr_win;
        wwm_workspace_set_window_focused_i(workspace, next_index);
    }
}
void wwm_workspace_swap_focused_with_prev_window(WWMWorkspace *workspace)
{
    assert(workspace->windows_arr_size > 0);

    const uint16_t curr_index = workspace->curr_window_i;
    const uint16_t prev_index = wwm_workspace_get_prev_window_index(workspace);
    if (curr_index != prev_index) {
        const HWND curr_win = wwm_workspace_get_window_i(workspace, curr_index);
        const HWND prev_win = wwm_workspace_get_window_i(workspace, prev_index);
        workspace->windows_arr[curr_index] = prev_win;
        workspace->windows_arr[prev_index] = curr_win;
        wwm_workspace_set_window_focused_i(workspace, prev_index);
    }
}
HWND wwm_workspace_get_window_focused(WWMWorkspace *workspace)
{
    assert(workspace->curr_window_i < workspace->windows_arr_size);

    return wwm_workspace_get_window_i(workspace, workspace->curr_window_i);
}
void wwm_workspace_minimize_windows(WWMWorkspace *workspace)
{
    for (uint16_t i = 0; i < workspace->windows_arr_size; ++i) {
        wwm_hwnd_minimize(workspace->windows_arr[i]);
    }
}
void wwm_workspace_update_windows_positions(WWMWorkspace *workspace)
{
    if (wwm_workspace_is_empty(workspace)) {
        return;
    }

    const uint16_t nb_windows = workspace->windows_arr_size;

    switch (workspace->presentation_mode) {
    case WWMPresentationMode_Tabbed: {
        for (uint16_t i = 0; i < nb_windows; ++i) {
            const HWND hwnd = wwm_workspace_get_window_i(workspace, i);
            wwm_hwnd_maximize(hwnd);
        }
    } break;
    case WWMPresentationMode_Horizontal: {
        for (uint16_t i = 0; i < nb_windows; ++i) {
            const HWND hwnd = wwm_workspace_get_window_i(workspace, i);
            wwm_hwnd_make_horizontal_section(hwnd, i, nb_windows);
        }
    } break;
    case WWMPresentationMode_Vertical: {
        for (uint16_t i = 0; i < nb_windows; ++i) {
            const HWND hwnd = wwm_workspace_get_window_i(workspace, i);
            wwm_hwnd_make_vertical_section(hwnd, i, nb_windows);
        }
    } break;
    }

    wwm_hwnd_focus(wwm_workspace_get_window_focused(workspace));
}
void wwm_workspace_set_presentation_mode(WWMWorkspace *workspace, WWMPresentationMode mode)
{
    workspace->presentation_mode = mode;
}

//
// Impl WindowManager State
//

typedef struct WWMState {
    WWMWorkspace workspaces[10];
    uint16_t curr_workspace_i;
} WWMState;

static WWMState WM_STATE = {
    .workspaces = {0},
    .curr_workspace_i = 0,
};

WWMWorkspace *wwm_state_get_workspace_i(uint16_t index)
{
    assert(index < 10);

    return &WM_STATE.workspaces[index];
}
WWMWorkspace *wwm_state_get_workspace_focused()
{
    return wwm_state_get_workspace_i(WM_STATE.curr_workspace_i);
}
void wwm_state_remove_window(HWND hwnd)
{
    for (uint16_t i = 0; i < 10; ++i) {
        wwm_workspace_remove_window_ref(wwm_state_get_workspace_i(i), hwnd);
    }
}
void wwm_state_add_window_to_workspace_i(uint16_t index, HWND hwnd)
{
    WWMWorkspace *workspace = wwm_state_get_workspace_i(index);
    if (!wwm_workspace_has_window(workspace, hwnd)) {
        wwm_workspace_add_window(workspace, hwnd);
    }
}
void wwm_state_add_window_to_workspace_focused(HWND hwnd)
{
    WWMWorkspace *workspace = wwm_state_get_workspace_focused();
    if (!wwm_workspace_has_window(workspace, hwnd)) {
        const uint16_t index = wwm_workspace_add_window(workspace, hwnd);
        wwm_workspace_set_window_focused_i(workspace, index);
        wwm_hwnd_maximize(hwnd);
        wwm_workspace_update_windows_positions(workspace);
    }
}
void wwm_state_go_to_workspace(uint16_t index)
{
    assert(index < 10);

    WWMWorkspace *workspace_focused = wwm_state_get_workspace_focused();
    wwm_workspace_minimize_windows(workspace_focused);
    WM_STATE.curr_workspace_i = index;

    WWMWorkspace *workspace_next = wwm_state_get_workspace_focused();
    wwm_workspace_update_windows_positions(workspace_next);
}
void wwm_state_move_window_focused_to_workspace_i(uint16_t index)
{
    WWMWorkspace *workspace_focused = wwm_state_get_workspace_focused();
    if (wwm_workspace_is_empty(workspace_focused)) {
        return;
    }
    HWND hwnd = wwm_workspace_get_window_focused(workspace_focused);
    WWMWorkspace *new_workspace = wwm_state_get_workspace_i(index);
    wwm_workspace_remove_window_ref(workspace_focused, hwnd);
    wwm_workspace_add_window(new_workspace, hwnd);
    wwm_hwnd_minimize(hwnd);
    wwm_workspace_update_windows_positions(workspace_focused);
}

//
// Impl WWMAction (feel free do add anthing you want)
//

void WWMAction_Undefinded()
{
    // do nothing
}
void WWMAction_GoToWorkspace1()
{
    wwm_state_go_to_workspace(0);
}
void WWMAction_GoToWorkspace2()
{
    wwm_state_go_to_workspace(1);
}
void WWMAction_GoToWorkspace3()
{
    wwm_state_go_to_workspace(2);
}
void WWMAction_GoToWorkspace4()
{
    wwm_state_go_to_workspace(3);
}
void WWMAction_GoToWorkspace5()
{
    wwm_state_go_to_workspace(4);
}
void WWMAction_GoToWorkspace6()
{
    wwm_state_go_to_workspace(5);
}
void WWMAction_GoToWorkspace7()
{
    wwm_state_go_to_workspace(6);
}
void WWMAction_GoToWorkspace8()
{
    wwm_state_go_to_workspace(7);
}
void WWMAction_GoToWorkspace9()
{
    wwm_state_go_to_workspace(8);
}
void WWMAction_GoToWorkspace10()
{
    wwm_state_go_to_workspace(9);
}
void WWMAction_FocusedWinMoveToWorkspace1()
{
    wwm_state_move_window_focused_to_workspace_i(0);
}
void WWMAction_FocusedWinMoveToWorkspace2()
{
    wwm_state_move_window_focused_to_workspace_i(1);
}
void WWMAction_FocusedWinMoveToWorkspace3()
{
    wwm_state_move_window_focused_to_workspace_i(2);
}
void WWMAction_FocusedWinMoveToWorkspace4()
{
    wwm_state_move_window_focused_to_workspace_i(3);
}
void WWMAction_FocusedWinMoveToWorkspace5()
{
    wwm_state_move_window_focused_to_workspace_i(4);
}
void WWMAction_FocusedWinMoveToWorkspace6()
{
    wwm_state_move_window_focused_to_workspace_i(5);
}
void WWMAction_FocusedWinMoveToWorkspace7()
{
    wwm_state_move_window_focused_to_workspace_i(6);
}
void WWMAction_FocusedWinMoveToWorkspace8()
{
    wwm_state_move_window_focused_to_workspace_i(7);
}
void WWMAction_FocusedWinMoveToWorkspace9()
{
    wwm_state_move_window_focused_to_workspace_i(8);
}
void WWMAction_FocusedWinMoveToWorkspace10()
{
    wwm_state_move_window_focused_to_workspace_i(9);
}
void WWMAction_FocusedWinMoveUp()
{
    WWMWorkspace *workspace = wwm_state_get_workspace_focused();
    if (!wwm_workspace_is_empty(workspace)) {
        wwm_workspace_swap_focused_with_prev_window(workspace);
        wwm_workspace_update_windows_positions(workspace);
    }
}
void WWMAction_FocusedWinMoveDown()
{
    WWMWorkspace *workspace = wwm_state_get_workspace_focused();
    if (!wwm_workspace_is_empty(workspace)) {
        wwm_workspace_swap_focused_with_next_window(workspace);
        wwm_workspace_update_windows_positions(workspace);
    }
}
void WWMAction_FocusedWinMoveLeft()
{
    WWMAction_FocusedWinMoveUp();
}
void WWMAction_FocusedWinMoveRight()
{
    WWMAction_FocusedWinMoveDown();
}
void WWMAction_FocusUp()
{
    WWMWorkspace *workspace = wwm_state_get_workspace_focused();
    if (!wwm_workspace_is_empty(workspace)) {
        const uint16_t prev_index = wwm_workspace_get_prev_window_index(workspace);
        wwm_workspace_set_window_focused_i(workspace, prev_index);
        wwm_hwnd_focus(wwm_workspace_get_window_focused(workspace));
    }
}
void WWMAction_FocusDown()
{
    WWMWorkspace *workspace = wwm_state_get_workspace_focused();
    if (!wwm_workspace_is_empty(workspace)) {
        const uint16_t next_index = wwm_workspace_get_next_window_index(workspace);
        wwm_workspace_set_window_focused_i(workspace, next_index);
        wwm_hwnd_focus(wwm_workspace_get_window_focused(workspace));
    }
}
void WWMAction_FocusLeft()
{
    WWMAction_FocusUp();
}
void WWMAction_FocusRight()
{
    WWMAction_FocusDown();
}
void WWMAction_FocusedWorkspaceToTabbed()
{
    WWMWorkspace *workspace = wwm_state_get_workspace_focused();
    wwm_workspace_set_presentation_mode(workspace, WWMPresentationMode_Tabbed);
    wwm_workspace_update_windows_positions(workspace);
}
void WWMAction_FocusedWorkspaceToVertical()
{
    WWMWorkspace *focused = wwm_state_get_workspace_focused();
    wwm_workspace_set_presentation_mode(focused, WWMPresentationMode_Vertical);
    wwm_workspace_update_windows_positions(focused);
}
void WWMAction_FocusedWorkspaceToHorizontal()
{
    WWMWorkspace *workspace = wwm_state_get_workspace_focused();
    wwm_workspace_set_presentation_mode(workspace, WWMPresentationMode_Horizontal);
    wwm_workspace_update_windows_positions(workspace);
}
void WWMAction_FocusedWorkspaceToggleHorizontalVertical()
{
    WWMWorkspace *workspace = wwm_state_get_workspace_focused();
    switch (workspace->presentation_mode) {
    case WWMPresentationMode_Tabbed:
        WWMAction_FocusedWorkspaceToHorizontal();
        return;
    case WWMPresentationMode_Horizontal:
        WWMAction_FocusedWorkspaceToVertical();
        return;
    case WWMPresentationMode_Vertical:
        WWMAction_FocusedWorkspaceToHorizontal();
        return;
    }
}
void WWMAction_FocusedWinDestroy()
{
    WWMWorkspace *workspace = wwm_state_get_workspace_focused();
    if (!wwm_workspace_is_empty(workspace)) {
        wwm_hwnd_close(wwm_workspace_get_window_focused(workspace));
        wwm_workspace_update_windows_positions(wwm_state_get_workspace_focused());
    }
}

//
// Impl Windows Procedures
//

BOOL CALLBACK wwm_window_enum_proc(HWND hwnd, LPARAM user_data)
{
    (void)user_data;

    if (wwm_hwnd_is_real(hwnd)) {
        wwm_state_add_window_to_workspace_focused(hwnd);
    }
    return TRUE;
}
VOID CALLBACK wwm_window_created_proc(HWINEVENTHOOK hWinEventHook, DWORD event, HWND hwnd,
                                      LONG idObject, LONG idChild, DWORD idEventThread,
                                      DWORD dwmsEventTime)
{
    (void)hWinEventHook;
    (void)event;
    (void)idObject;
    (void)idChild;
    (void)idEventThread;
    (void)dwmsEventTime;

    if (wwm_hwnd_is_real(hwnd)) {
        wwm_state_add_window_to_workspace_focused(hwnd);
    }
}
VOID CALLBACK wwm_window_destroyed_proc(HWINEVENTHOOK hWinEventHook, DWORD event, HWND hwnd,
                                        LONG idObject, LONG idChild, DWORD idEventThread,
                                        DWORD dwmsEventTime)
{
    (void)hWinEventHook;
    (void)event;
    (void)idObject;
    (void)idChild;
    (void)idEventThread;
    (void)dwmsEventTime;

    wwm_state_remove_window(hwnd);
    wwm_workspace_update_windows_positions(wwm_state_get_workspace_focused());
}

//
// Impl System Tray Icon
//

static const char *WWM_TRAY_CLASSNAME = "WWMTrayWindow";
#define WWM_MESSAGE_ID_TRAYICON (WM_APP + 1)
#define WWM_MESSAGE_ID_TRAY_QUIT 1001

LRESULT CALLBACK wwm_tray_wnd_proc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg) {
    case WWM_MESSAGE_ID_TRAYICON:
        if (lParam == WM_RBUTTONUP || lParam == WM_LBUTTONUP) {
            HMENU menu = CreatePopupMenu();
            AppendMenu(menu, MF_STRING, WWM_MESSAGE_ID_TRAY_QUIT, "Quit");
            POINT point = {0};
            GetCursorPos(&point);
            SetForegroundWindow(hwnd);
            uint32_t cmd = TrackPopupMenu( //
                menu, TPM_RETURNCMD | TPM_NONOTIFY, point.x, point.y, 0, hwnd, NULL);
            DestroyMenu(menu);
            if (cmd == WWM_MESSAGE_ID_TRAY_QUIT) {
                PostQuitMessage(0);
            }
        }
        return 0;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    default:
        return DefWindowProc(hwnd, msg, wParam, lParam);
    }
}

HWND wwm_tray_icon_create(HINSTANCE instance)
{
    RegisterClass(&(WNDCLASS){
        .lpfnWndProc = wwm_tray_wnd_proc,
        .hInstance = instance,
        .lpszClassName = WWM_TRAY_CLASSNAME,
    });

    HWND hwnd = CreateWindowEx( //
        0, WWM_TRAY_CLASSNAME, "", WS_OVERLAPPED, 0, 0, 0, 0, NULL, NULL, instance, NULL);

    NOTIFYICONDATA nid = {
        .cbSize = sizeof(nid),
        .hWnd = hwnd,
        .uID = 1,
        .uFlags = NIF_MESSAGE | NIF_ICON | NIF_TIP,
        .uCallbackMessage = WWM_MESSAGE_ID_TRAYICON,
        .hIcon = LoadIcon(NULL, IDI_APPLICATION),
        .szTip = "WWM",
    };
    Shell_NotifyIcon(NIM_ADD, &nid);
    return hwnd;
}

void wwm_tray_icon_destroy(HWND hwnd)
{
    NOTIFYICONDATA nid = {
        .cbSize = sizeof(nid),
        .hWnd = hwnd,
        .uID = 1,
    };
    Shell_NotifyIcon(NIM_DELETE, &nid);
}

void wwm_ensure_single_instance()
{
    static HANDLE s_instance_mutex = NULL;
    s_instance_mutex = CreateMutexA(NULL, TRUE, "WWM:InstaceMutex");
    if (s_instance_mutex == NULL) {
        exit(1);
    }
    if (GetLastError() == ERROR_ALREADY_EXISTS) {
        CloseHandle(s_instance_mutex);
        s_instance_mutex = NULL;
        exit(1);
    }
}

// NOLINT(readability-non-const-parameter)
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    (void)hInstance;
    (void)hPrevInstance;
    (void)lpCmdLine;
    (void)nShowCmd;

    wwm_ensure_single_instance();

    HHOOK kb_ev_hook = SetWindowsHookEx(
        /*idHook=*/WH_KEYBOARD_LL,
        /*lpfn=*/wwm_kb_event_proc,
        /*hmod=*/GetModuleHandle(NULL),
        /*dwThreadId=*/0);

    // Collect windows into current workspace
    EnumWindows(wwm_window_enum_proc, 0);

    HWINEVENTHOOK win_created_hook = SetWinEventHook(
        /*eventMin=*/EVENT_OBJECT_SHOW,
        /*eventMax=*/EVENT_OBJECT_SHOW,
        /*hmodWinEventProc=*/NULL,
        /*pfnWinEventProc=*/wwm_window_created_proc,
        /*pfnWinEventProc=*/0,
        /*idProcess=*/0,
        /*idThread=*/WINEVENT_OUTOFCONTEXT | WINEVENT_SKIPOWNPROCESS);
    HWINEVENTHOOK win_destroyed_hook = SetWinEventHook(
        /*eventMin=*/EVENT_OBJECT_DESTROY,
        /*eventMax=*/EVENT_OBJECT_DESTROY,
        /*hmodWinEventProc=*/NULL,
        /*pfnWinEventProc=*/wwm_window_destroyed_proc,
        /*pfnWinEventProc=*/0,
        /*idProcess=*/0,
        /*idThread=*/WINEVENT_OUTOFCONTEXT | WINEVENT_SKIPOWNPROCESS);

    HWND tray_hwnd = wwm_tray_icon_create(GetModuleHandle(NULL));

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    wwm_tray_icon_destroy(tray_hwnd);
    DestroyWindow(tray_hwnd);

    UnhookWindowsHookEx(kb_ev_hook);
    UnhookWinEvent(win_created_hook);
    UnhookWinEvent(win_destroyed_hook);
    return 0;
}
