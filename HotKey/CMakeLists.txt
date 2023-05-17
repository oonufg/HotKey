# CMakeList.txt: проект CMake для HotKey; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (HotKey "HotKey.cpp" "HotKey.h" "Domain/Shortcut.cpp" "Domain/Shortcut.h" "Domain/Button.cpp" "Domain/Button.h"     "Core/Listener.h" "Core/Listener.cpp" "Core/MessageQueue.cpp" "Core/MessageQueue.h" "Core/Message.h" "Core/Message.cpp" "Core/ShortcutManager.h" "Core/ShortcutManager.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET HotKey PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
