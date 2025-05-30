#include <JSystem/JDrama/JDRResolution.hpp>
#include <dolphin/vi.h>

u16 JDrama::GetVIWidthMax()
{
	switch (VIGetTvFormat()) {
	case VI_TVMODE_NTSC_DS: // 1
		return 720;
	case VI_TVMODE_NTSC_PROG: // 2
		return 720;
	case VI_TVMODE_PAL_DS: // 5
		return 720;
	default:
	case VI_TVMODE_NTSC_INT: // 0
		return 720;
	}
}

u16 JDrama::GetVIHeightMax()
{
	switch (VIGetTvFormat()) {
	case VI_TVMODE_NTSC_DS: // 1
		return 574;
	case VI_TVMODE_NTSC_PROG: // 2
		return 480;
	case VI_TVMODE_PAL_DS: // 5
		return 480;
	default:
	case VI_TVMODE_NTSC_INT: // 0
		return 480;
	}
}
