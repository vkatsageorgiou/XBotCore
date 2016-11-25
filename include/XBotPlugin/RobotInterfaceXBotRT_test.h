/*
   Copyright (C) 2016 Italian Institute of Technology

   Developer:
       Luca Muratore (2016-, luca.muratore@iit.it)
       
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>       
   
*/

/**
 *
 * @author Luca Muratore (2016-, luca.muratore@iit.it)
*/

#ifndef __ROBOT_INTERFACE_XBOT_RT_TEST_H__
#define __ROBOT_INTERFACE_XBOT_RT_TEST_H__

#include <XBotCore/XBotPlugin.hpp>
#include <memory>

#include <XBotInterface/RobotInterface.h>

namespace XBot
{
    class RobotInterfaceXBotRT_test;
}

/**
 * @brief XBotCore RT plugin that communicates wit the non-RT enviroment using XDDP pipes
 * 
 */
class XBot::RobotInterfaceXBotRT_test : public XBot::XBotPlugin
{
private:
    std::map<int, float> _link_pos;
    XBot::RobotInterface::Ptr _robot_interface;
    
public:  
    
    RobotInterfaceXBotRT_test(std::string name,
                            std::shared_ptr<XBot::IXBotModel> model, 
                            std::shared_ptr<XBot::IXBotChain> chain,
                            std::shared_ptr<XBot::IXBotRobot> robot,
                            std::shared_ptr<XBot::IXBotFT> ft);

    virtual bool init(void);
    
    virtual void run(void);
    
    virtual bool close(void);
    
    virtual ~RobotInterfaceXBotRT_test();
    

};

#endif //__ROBOT_INTERFACE_XBOT_RT_TEST_H__
