/*
 * ProxyComponent.cpp
 *
 *  Created on: Feb 2, 2013
 *  Author: rvergis
 *
 *  Copyright (c) 2013 Zynga. All rights reserved.
 */

#include "ProxyComponent.hpp"
#include "CXXContext.hpp"

#define LOG_TAG "ProxyComponent"
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))

ProxyComponent::ProxyComponent()
{
	LOGI("ProxyComponent::ProxyComponent() constructor");
}

ProxyComponent::~ProxyComponent()
{
	LOGI("ProxyComponent::ProxyComponent() destructor");
}

