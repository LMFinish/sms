#include <JSystem/JUtility/JUTResource.hpp>
#include <JSystem/JKernel/JKRArchive.hpp>
#include <JSystem/JSupport/JSUInputStream.hpp>
#include <string.h>

void* JUTResReference::getResource(JSUInputStream* stream, u32 resType,
                                   JKRArchive* archive)
{
	stream->read(&mType, 1);
	stream->read(&mNameLength, 1);
	stream->read(&mName, mNameLength);

	if (mType == RESTYPE_Unk2 || mType == RESTYPE_Unk3
	    || mType == RESTYPE_Unk4) {
		mName[mNameLength] = 0;
	}

	return getResource(resType, archive);
}

void* JUTResReference::getResource(u32 resType, JKRArchive* archive)
{
	void* res = NULL;
	switch (mType) {
	case RESTYPE_Unk1:
		break;
	case RESTYPE_Unk2:
		res = JKRArchive::getGlbResource(resType, mName, archive);
		break;
	case RESTYPE_Unk3:
		res = JKRFileLoader::getGlbResource(mName, archive);
		break;
	case RESTYPE_Unk4:
		res = JKRFileLoader::getGlbResource(mName);
		break;
	}

	return res;
}
