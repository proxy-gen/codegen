/*
 * ProxyComponent.h
 *
 * Created on: Feb 2, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
 */

#ifndef PROXYCOMPONENT_H_
#define PROXYCOMPONENT_H_

#include <android/log.h>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

class ProxyComponent
{

protected:

	ProxyComponent();
	virtual ~ProxyComponent();

private:

	ProxyComponent(const ProxyComponent&);
};

#ifdef __cplusplus
}
#endif //__cplusplus

#endif /* PROXYCOMPONENT_H_ */
