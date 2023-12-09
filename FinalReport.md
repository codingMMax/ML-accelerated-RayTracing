# Randering Speed
## Naive Implementation Timing in Apple M2 Pro SoC
Scanlines remaining: 205 10 sample/pixel speed @20: 547.85 ms / line.<br> 
Scanlines remaining: 185 10 sample/pixel speed @40: 742.275 ms / line.<br> 
Scanlines remaining: 165 10 sample/pixel speed @60: 953.767 ms / line.<br> 
Scanlines remaining: 145 10 sample/pixel speed @80: 1065.11 ms / line.<br> 
Scanlines remaining: 125 10 sample/pixel speed @100: 1173.98 ms / line.<br> 
Scanlines remaining: 105 10 sample/pixel speed @120: 1283.41 ms / line.<br> 
Scanlines remaining: 85 10 sample/pixel speed @140: 1370.5 ms / line.<br> 
Scanlines remaining: 65 10 sample/pixel speed @160: 1419.81 ms / line.<br> 
Scanlines remaining: 45 10 sample/pixel speed @180: 1426.37 ms / line.<br> 
Scanlines remaining: 25 10 sample/pixel speed @200: 1429.91 ms / line.<br> 
Scanlines remaining: 5 10 sample/pixel speed @220: 1428.85 ms / line.<br> 
## Axis Sorted BVH added in Apple M2 Pro SoC
Scanlines remaining: 205 10 sample/pixel speed @20: 4.75 ms / line.<br> 
Scanlines remaining: 185 10 sample/pixel speed @40: 15.1 ms / line.<br> 
Scanlines remaining: 165 10 sample/pixel speed @60: 31.4667 ms / line.<br> 
Scanlines remaining: 145 10 sample/pixel speed @80: 36.7125 ms / line.<br> 
Scanlines remaining: 125 10 sample/pixel speed @100: 40.94 ms / line.<br> 
Scanlines remaining: 105 10 sample/pixel speed @120: 44.5 ms / line.<br> 
Scanlines remaining: 85 10 sample/pixel speed @140: 47.0786 ms / line.<br> 
Scanlines remaining: 65 10 sample/pixel speed @160: 48.4562 ms / line.<br> 
Scanlines remaining: 45 10 sample/pixel speed @180: 48.3222 ms / line.<br> 
Scanlines remaining: 25 10 sample/pixel speed @200: 48.065 ms / line.<br> 
Scanlines remaining: 5 10 sample/pixel speed @220: 47.6864 ms / line.<br> 

# Building BVH
## Volume Sorted BVH
Building BVH:402 objects 0.011 s<br>
Building BVH:902 objects 0.031 s<br>
Building BVH:1600 objects 0.071 s<br>
Building BVH:2501 objects 0.139 s<br>
Building BVH:3600 objects 0.275 s<br>
Building BVH:4901 objects 0.514 s<br>
Building BVH:6402 objects 0.96 s<br>
Building BVH:8101 objects 1.219 s<br>
Building BVH:10001 objects 2.16 s<br>
Building BVH:12102 objects 3.532 s<br>
Building BVH:14401 objects 4.31 s<br>
Building BVH:16900 objects 5.373 s<br>
Building BVH:19600 objects 8.201 s<br>
Building BVH:22502 objects 11.848 s<br>
Building BVH:25600 objects 15.478 s<br>
Building BVH:28901 objects 17.513 s<br>
Building BVH:32402 objects 19.704 s<br>
Building BVH:36102 objects 26.509 s<br>
Building BVH:40002 objects 35.914 s<br>
Building BVH:44102 objects 46.711 s<br>
Building BVH:48401 objects 59.892 s<br>
Building BVH:52900 objects 67.387 s<br>
Building BVH:57603 objects 76.436 s<br>

## Axies Sorted BVH
Building BVH for 402 objects 0.009 s<br>
Building BVH for 902 objects 0.03 s<br>
Building BVH for 1600 objects 0.071 s<br>
Building BVH for 2501 objects 0.142 s<br>
Building BVH for 3600 objects 0.278 s<br>
Building BVH for 4901 objects 0.528 s<br>
Building BVH for 6402 objects 0.975 s<br>
Building BVH for 8101 objects 1.23 s<br>
Building BVH for 10001 objects 2.169 s<br>
Building BVH for 12102 objects 3.568 s<br>
Building BVH for 14401 objects 4.363 s<br>
Building BVH for 16900 objects 5.543 s<br>
Building BVH for 19600 objects 8.586 s<br>
Building BVH for 22502 objects 12.312 s<br>
Building BVH for 25600 objects 15.519 s<br>
Building BVH for 28901 objects 17.434 s<br>
Building BVH for 32402 objects 19.871 s<br>
Building BVH for 36102 objects 26.574 s<br>
Building BVH for 40002 objects 35.803 s<br>
Building BVH for 44102 objects 47.338 s<br>
Building BVH for 48401 objects 59.176 s<br>
Building BVH for 52900 objects 67.474 s<br>
Building BVH for 57603 objects 72.272 s<br>

## No Sorted BVH
Building BVH:403 objects 0.007 s<br>
Building BVH:902 objects 0.033 s<br>
Building BVH:1603 objects 0.117 s<br>
Building BVH:2502 objects 0.264 s<br>
Building BVH:3600 objects 0.532 s<br>
Building BVH:4901 objects 1.02 s<br>
Building BVH:6402 objects 1.882 s<br>
Building BVH:8102 objects 2.396 s<br>
Building BVH:10001 objects 4.29 s<br>
Building BVH:12103 objects 6.916 s<br>
Building BVH:14401 objects 8.644 s<br>
Building BVH:16901 objects 10.797 s<br>
Building BVH:19601 objects 15.989 s<br>
Building BVH:22501 objects 22.957 s<br>
Building BVH:25600 objects 30.051 s<br>
Building BVH:28900 objects 34.626 s<br>
Building BVH:32402 objects 39.647 s<br>
Building BVH:36100 objects 53.121 s<br>
Building BVH:40002 objects 68.217 s<br>
Building BVH:44101 objects 89.015 s<br>
Building BVH:48402 objects 113.078 s<br>
Building BVH:52901 objects 127.902 s<br>
Building BVH:57601 objects 139.276 s<br>

## No Sorted BVH with Parallel Rendering
Building BVH:403 objects 0.009 s Rendering 11.816 s BVH / Rendering: %0.0761679 <br>
Building BVH:902 objects 0.045 s Rendering 34.374 s BVH / Rendering: %0.130913 <br>
Building BVH:1602 objects 0.136 s Rendering 80.748 s BVH / Rendering: %0.168425 <br>
Building BVH:2500 objects 0.311 s Rendering 97.449 s BVH / Rendering: %0.319141 <br>
Building BVH:3600 objects 0.62 s Rendering 204.314 s BVH / Rendering: %0.303454 <br>

## No Sorted BVH with Sequential Rendering
Building BVH:403 objects 0.009 s Rendering 12.047 s BVH / Rendering: %0.0747074 <br>
Building BVH:902 objects 0.04 s Rendering 34.486 s BVH / Rendering: %0.115989 <br>
Building BVH:1602 objects 0.138 s Rendering 80.341 s BVH / Rendering: %0.171768 <br>
Building BVH:2500 objects 0.314 s Rendering 97.765 s BVH / Rendering: %0.321178 <br>
Building BVH:3600 objects 0.626 s Rendering 204.781 s BVH / Rendering: %0.305692 <br>

## Axies Sorted BVH with Sequential Rendering
Building BVH: 403 objects 0.009 s Rendering 8.334 s BVH / Rendering: %0.107991<br>
Building BVH: 900 objects 0.04 s Rendering 22.797 s BVH / Rendering: %0.175462<br>
Building BVH: 1601 objects 0.131 s Rendering 54.542 s BVH / Rendering: %0.240182<br>
Building BVH: 2500 objects 0.31 s Rendering 65.597 s BVH / Rendering: %0.472583<br>
Building BVH: 3601 objects 0.625 s Rendering 136.672 s BVH / Rendering: %0.457299<br>

### Difficulties in Parallization using OMP
1. Race condition when adding initialized sephere to the worldlist.
2. Rasterization and rendering has to be in-order. The original code framework does not privdes a race-free structure. 

