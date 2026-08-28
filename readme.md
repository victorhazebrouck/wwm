# Windows Window Manager

If god forbid you ever have to use windows.

- `i3wm` like tiling window manager + key remapper.
- Works without admin right.
- Easy to build yourself.
- Easy to can for security holes: 1 file, no dependencies.

## Configuring:

Configuration happens directly in the c file.

### Keyboard Actions:

Example mapping `mod1 + 1` to `GoToWorkspace1` and `mod1 + mod2 + 1` to `FocusedWinMoveToWorkspace1`.

```c
static const WWMKeyAction KEY_PRIMARY_ACTIONS[] = {
    {.key = WWMKeyCode_1, .action = WWMAction_GoToWorkspace1},
    // ...
};
static const WWMKeyAction KEY_SECONDARY_ACTIONS[] = {
    {.key = WWMKeyCode_1, .action = WWMAction_FocusedWinMoveToWorkspace1},
    // ...
};
```

### Mod Keys:

Example configing `CAPSLOCK` as primary mod key and `LSHIFT` as secondary mod key.

```c
static const WWMConfig CONFIG = {
    .mod1_key = WWMKeyCode_CAPSLOCK,
    .mod2_key = WWMKeyCode_LSHIFT,
};
```

### Key Remapper:

Example remapping `RSHIFT` to `END` and `RALT` to `HOME`.

```c
static const WWMKeyRemap KEY_REMAPS[] = {
    {.key_original = WWMKeyCode_RSHIFT, .key_new = WWMKeyCode_END},
    {.key_original = WWMKeyCode_RALT, .key_new = WWMKeyCode_HOME},
};
```

## Building:

### with CMake:

```sh
cmake --preset msvc-release
cmake --build --preset msvc-release
```

### with msvc:

```sh
cl src\wwm.c /O2
```

#### Adding Custom Actions:

```c
// every action is defined as follows:
typedef void (*WWMAction)();
void WWMAction_Undefinded();
void WWMAction_GoToWorkspace1();

// just implement the WWMAction interface and bind it to a shortcut
void WWMActionCustom_HelloWorld()
{
    printf("Hello world!");
}
```
