#ifndef BT_MULTIBODY_WORLD_IMPORTER_H
#define BT_MULTIBODY_WORLD_IMPORTER_H

#include "../Extras/Serialize/BulletWorldImporter/btBulletWorldImporter.h"
#include "BulletSoftBody/btSoftMultiBodyDynamicsWorld.h"

class btMultiBodyWorldImporter : public btBulletWorldImporter
{
	struct btMultiBodyWorldImporterInternalData* m_data;

public:

	btMultiBodyWorldImporter(class btSoftMultiBodyDynamicsWorld* world);
	virtual ~btMultiBodyWorldImporter();

	virtual bool convertAllObjects(  bParse::btBulletFile* bulletFile2);

	virtual void deleteAllData();
};

#endif //BT_MULTIBODY_WORLD_IMPORTER_H
