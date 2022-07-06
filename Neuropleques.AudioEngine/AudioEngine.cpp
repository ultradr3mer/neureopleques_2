#include "AudioEngine.h"

#include <QCoreApplication>
#include <iostream>

QTextStream qOut = QTextStream(stdout);

AudioEngine::AudioEngine()
{
  qOut << "AudioEngine Instance Created" << Qt::endl;
}

AudioEngine::~AudioEngine()
{
}
