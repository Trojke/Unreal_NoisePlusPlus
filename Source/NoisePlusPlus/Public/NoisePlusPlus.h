// Some copyright should be here...

#pragma once

#include "ModuleManager.h"
#include "Noise.h"


class FNoisePlusPlusModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};