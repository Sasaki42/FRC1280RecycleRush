#include "../H/CameraLights.h"

//------------------------------------------------------------------------------
// METHOD:  CameraLights::CameraLights()
// Type:	Constructor
//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
CameraLights::CameraLights(uint channel)
{
	pCameraLights = new Relay(channel,Relay::kForwardOnly);

	TurnOff();
}
//------------------------------------------------------------------------------
// METHOD:  CameraLights::~CameraLights()
// Type:	Destructor
//  @(*_*)@
//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
CameraLights::~CameraLights()
{
	// Does nothing
}
//------------------------------------------------------------------------------
// METHOD:  CameraLights::TurnOn()
// Type:	Method
//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
void  CameraLights::TurnOn()
{
	pCameraLights->Set(Relay::kOn);

	lightStatus = kOn;

	return;
}
//------------------------------------------------------------------------------
// METHOD:  CameraLights::TurnOff()
//  @("_")@
// Type:	Constructor
//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
void  CameraLights::TurnOff()
{
	pCameraLights->Set(Relay::kOff);

	lightStatus = kOff;

	return;
}
//------------------------------------------------------------------------------
// METHOD:  CameraLights::GetStatus()
// Type:	Constructor
//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
bool  CameraLights::GetCameraStatus()
{
	return lightStatus;
}

