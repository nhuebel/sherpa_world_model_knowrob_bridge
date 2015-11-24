/******************************************************************************
 * BRICS_3D - 3D Perception and Modeling Library
 * Copyright (c) 2015, KU Leuven
 *
 * Authors: Sebastian Blumenthal
 *          Benjamin  Brieber
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

#include "RsgToKnowrobObserver.h"
#include <brics_3d/core/Logger.h>


using brics_3d::Logger;

namespace brics_3d {
namespace rsg {

RsgToKnowrobObserver::RsgToKnowrobObserver(WorldModel* wm) : wm(wm) {
	// init menbers here
}

RsgToKnowrobObserver::~RsgToKnowrobObserver() {

}

bool RsgToKnowrobObserver::addNode(Id parentId, Id& assignedId,
		vector<Attribute> attributes, bool forcedId) {
	return true;
}

bool RsgToKnowrobObserver::addGroup(Id parentId, Id& assignedId,
		vector<Attribute> attributes, bool forcedId) {

	return true;
}

bool RsgToKnowrobObserver::addTransformNode(Id parentId, Id& assignedId,
		vector<Attribute> attributes,
		IHomogeneousMatrix44::IHomogeneousMatrix44Ptr transform,
		TimeStamp timeStamp, bool forcedId) {

	LOG(DEBUG) << "RsgToKnowrobObserver::addTransformNode.";

	return false;

}

bool RsgToKnowrobObserver::addUncertainTransformNode(Id parentId,
		Id& assignedId, vector<Attribute> attributes,
		IHomogeneousMatrix44::IHomogeneousMatrix44Ptr transform,
		ITransformUncertainty::ITransformUncertaintyPtr uncertainty,
		TimeStamp timeStamp, bool forcedId) {

	return true;
}


bool RsgToKnowrobObserver::addGeometricNode(Id parentId, Id& assignedId,
		vector<Attribute> attributes, Shape::ShapePtr shape,
		TimeStamp timeStamp, bool forcedId) {

	return true;
}

bool RsgToKnowrobObserver::addRemoteRootNode(Id rootId, vector<Attribute> attributes) {

	return true;
}

bool RsgToKnowrobObserver::addConnection(Id parentId, Id& assignedId, vector<Attribute> attributes, vector<Id> sourceIds, vector<Id> targetIds, TimeStamp start, TimeStamp end, bool forcedId) {

	return true;
}

bool RsgToKnowrobObserver::setNodeAttributes(Id id,
		vector<Attribute> newAttributes, TimeStamp timeStamp ) {

	return true;
}

bool RsgToKnowrobObserver::setTransform(Id id,
		IHomogeneousMatrix44::IHomogeneousMatrix44Ptr transform,
		TimeStamp timeStamp) {

	/*
	 * Pecepetion event w.r.t to a changed pose goes here...
	 */

	return false;
}

bool RsgToKnowrobObserver::setUncertainTransform(Id id,
		IHomogeneousMatrix44::IHomogeneousMatrix44Ptr transform,
		ITransformUncertainty::ITransformUncertaintyPtr uncertainty,
		TimeStamp timeStamp) {

	return true;
}

bool RsgToKnowrobObserver::deleteNode(Id id) {

	return true;
}

bool RsgToKnowrobObserver::addParent(Id id, Id parentId) {

	return true;
}

bool RsgToKnowrobObserver::removeParent(Id id, Id parentId) {

	return true;
}
} /* namespace rsg */
} /* namespace brics_3d */

/* EOF */
