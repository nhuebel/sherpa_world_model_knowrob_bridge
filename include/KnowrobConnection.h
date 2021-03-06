/******************************************************************************
 * Sherpa RSG KNOWROB Bridge
 * Copyright (c) 2016, IAI Bremen
 *
 * Authors: Benjamin  Brieber
 *
 *
 * This software is published under a dual-license: GNU Lesser General Public
 * License LGPL 2.1 and Modified BSD license. The dual-license implies that
 * users of this code may choose which terms they prefer.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License LGPL and the BSD license for
 * more details.
 *
 ******************************************************************************/

#ifndef __IAI_RSG_KNOWROB_CONNECTION__
#define __IAI_RSG_KNOWROB_CONNECTION__



#include <string>
#include <iostream>
 
#include <ros/ros.h>
#include <json_prolog/prolog.h>
 
 
#include "ISherpaEventObserver.h"

using namespace std;
using namespace json_prolog;

class KnowrobConnection :  public ISherpaEventObserver{
  
  public:
    void onSherpaEvent(const sherpa_world_model_knowrob_bridge_msgs::SherpaEvent::ConstPtr& msg);
    int init(void);
    void call_nothin();
    
private:
  Prolog pl;
  
};
  
  

#endif//__IAI_RSG_KNOWROB_CONNECTION__