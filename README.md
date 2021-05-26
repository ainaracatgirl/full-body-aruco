# Full Body ArUco
Full body tracking for SteamVR using ArUco markers.

**Current Features**
Full Body ArUco uses different systems to work.

`fullgyrodrv` v1.0.0<br>
`markers` v1.0.0<br>
`trackers` v1.0.0

This currently provides the following features

- Cheap
- Accurate
- Low latency

## SteamVR Driver
---
Full Body ArUco uses the Full Gyro Driver (`fullgyrodrv`).
When the driver is enabled and active, SteamVR will *crash* if no data is received in around 10 seconds.
> Remember to disable the driver before you connect the headset if you're not using it to prevent a crash.

## Trackers / Markers
---
Hip Tracker, 4 markers<br>
Left Foot Tracker, 3 markers<br>
Right Foot Tracker, 3 markers<br>

> This information only applies to the currently released Dev Kit, *version 1.0*

## Software
---
The *Unity middleman* runs the task of transforming MARKER positions to TRACKER positions. The *Unity middleman* also smooths and applies filters to the positions to get accurate tracking.

The *Python Tracker* runs the task of identifying ArUco markers, estimating it's 3D position, and sending it to the *Unity middleman*.

The *SteamVR driver* is a really simple program that just forwards the positions from the *Unity middleman* to the SteamVR runtime.

## Development Kit
---
> Current version: **1.0**

The current Dev Kit contains 3 trackers (hip, left foot, right foot) and needs 3 different pieces of software:
- The SteamVR driver
- The Unity middleman
- The Python OpenCV marker tracker

*TODO: for the next version, remove the Unity middleman*

## License
---
MIT License

Copyright &copy; 2021 JanCraft