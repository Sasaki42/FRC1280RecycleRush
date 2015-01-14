#ifndef CAMERALIGHTS_H
#define CAMERALIGHTS_H

#include "WPILib.h"

//------------------------------------------------------------------------------
// DEFINE CameraLights CLASS
//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
class CameraLights
{
	public:
		static const bool kOff = false;
		static const bool kOn  = true;
		CameraLights(uint channel);
		~CameraLights();
		void TurnOn();
		void TurnOff();
		bool GetCameraStatus();
	private:
		Relay *pCameraLights;
		bool  lightStatus;

};
#endif