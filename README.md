# Object Tracking with OpenCV in C++

Simple object tracking with OpenCV using C++.

## Compiling

OpenCV has to be setup. Refer [OpenCV](https://docs.opencv.org/master/d7/d9f/tutorial_linux_install.html) docs.

```
g++ Main.cpp -o output -std=c++11 `pkg-config --cflags --libs opencv`
```

## Execution

Use: `./output`

Grab a green ball and show it in front of the camera, wait for the tracker to detect the object and press `t` to start training the tracker to detect and track the particular object.

Press `c` to clear the lines drawn on the GUI window while tracking the ball.

**Note:** To be updated.