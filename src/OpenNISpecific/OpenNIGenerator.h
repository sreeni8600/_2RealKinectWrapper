/*
	CADET - Center for Advances in Digital Entertainment Technologies
	Copyright 2011 University of Applied Science Salzburg / MultiMediaTechnology

	http://www.cadet.at
	http://multimediatechnology.at/

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.

	CADET - Center for Advances in Digital Entertainment Technologies

	Authors: Robert Praxmarer, Gerlinde Emsenhuber, Robert Sommeregger
	Email: support@cadet.at
	Created: 08-09-2011
*/

#pragma once
#ifndef TARGET_MSKINECTSDK
#include "_2RealConfig.h"
#include "_2RealUtility.h"
#include "XnOpenNI.h"
#include "XnCppWrapper.h"
#include <stdint.h>
#include <vector>

namespace _2Real
{
	//fwds
	class _2RealTrackedUser;
	class _2RealTrackedJoint;
	typedef std::vector<_2RealTrackedUser>	_2RealTrackedUserVector;

class OpenNIGenerator
{
	public:
		virtual XnStatus			registerCallbacks() = 0;
		virtual XnStatus			startGenerating() = 0;
		virtual XnStatus			stopGenerating() = 0;
		virtual bool				isGenerating() const = 0;
		virtual XnStatus			lockGenerator() = 0;
		virtual XnStatus			unlockGenerator() = 0;
		virtual XnStatus			getErrorState() const = 0;
		virtual XnStatus			getTimestamp( uint64_t& time ) const = 0;
		virtual XnStatus			setMirroring( const bool mirror ) = 0;
};

}

#endif

