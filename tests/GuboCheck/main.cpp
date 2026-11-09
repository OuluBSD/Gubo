#include <Core/Core.h>
#include <Geometry/Geometry.h>
#include <Draw/Cuboid/Cuboid.h>

using namespace Upp;

CONSOLE_APP_MAIN
{
	StdLogSetup(LOG_COUT | LOG_FILE);
	Cout() << "========================================\n";
	Cout() << "Running GuboCheck Unit & Lifecycle Tests\n";
	Cout() << "========================================\n\n";

	// 1. Test Cuboid types and voxel bounds
	Cout() << "[1] Testing Gubo Cuboid geometry...\n";
	Cubf box(0, 0, 0, 50, 50, 50);
	ASSERT(box.GetSize().cx == 50);
	ASSERT(box.GetSize().cy == 50);
	ASSERT(box.GetSize().cz == 50);
	Cout() << "PASS: Cubf voxel bounds verified\n";

	Cout() << "\n========================================\n";
	Cout() << "ALL GuboCheck TESTS PASSED SUCCESSFULLY!\n";
	Cout() << "========================================\n";
}
