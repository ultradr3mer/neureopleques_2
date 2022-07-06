#pragma once

#include "AudioEngine.h"

public ref class AudioEngineManaged
{
  AudioEngine* innerEngine;
public:
  AudioEngineManaged();
  ~AudioEngineManaged();
};

