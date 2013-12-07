export ANDROID_SDK_ROOT="/Users/RicardoJorge/Documents/dev/eclipse/sdk"
export NDK_ROOT="/Users/RicardoJorge/Documents/dev/game_dev/android-ndk-r8e"
export PATH=$ANDROID_SDK_ROOT/tools:$PATH
export PATH=$ANDROID_SDK_ROOT/platform-tools:$PATH
export COCOS2DX_HOME=/Users/RicardoJorge/Documents/dev/game_dev/cocos2d-x-2.2.1
export PATH=$PATH:/opt/local/bin:/opt/local/sbin:/usr/bin:/bin:/usr/sbin:/sbin:/usr/local/bin:/usr/X11/bin:$ANDROID_HOME/platform-tools:$ANDROID_HOME/tools:$NDK_HOME

cd /Users/RicardoJorge/Documents/dev/game_dev/cocos2d-x-2.2.1/projects/SpaceGame/proj.android
./build_native.sh
android update project --path .
ant clean
ant debug
ant debug install
adb shell am start com.ricardo.SpaceGame/.SpaceGame