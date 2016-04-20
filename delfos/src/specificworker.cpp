/*
 *    Copyright (C) 2016 by YOUR NAME HERE
 *
 *    This file is part of RoboComp
 *
 *    RoboComp is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    RoboComp is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with RoboComp.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "specificworker.h"

/**
* \brief Default constructor
*/
SpecificWorker::SpecificWorker(MapPrx& mprx) : GenericWorker(mprx)
{
	delfos = new Delfos();
}

/**
* \brief Default destructor
*/
SpecificWorker::~SpecificWorker()
{
	delete delfos;
}

bool SpecificWorker::setParams(RoboCompCommonBehavior::ParameterList params)
{
	timer.start(Period);
	return true;
}

void SpecificWorker::compute()
{
	
}


void SpecificWorker::correctOdometer(const int x, const int z, const float alpha)
{

}

void SpecificWorker::getBasePose(int &x, int &z, float &alpha)
{

}

void SpecificWorker::resetOdometer()
{

}

void SpecificWorker::setOdometer(const TBaseState &state)
{

}

void SpecificWorker::getBaseState(TBaseState &state)
{

}

void SpecificWorker::setOdometerPose(const int x, const int z, const float alpha)
{

}

void SpecificWorker::stopBase()
{

}

void SpecificWorker::setSpeedBase(const float advx, const float advz, const float rot)
{
	delfos->setVelocity(advx, advz, rot);
}






