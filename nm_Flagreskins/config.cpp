class CfgPatches
{
	class nm_Flagreskins
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Camping"
		};
	};
};
class CfgMods
{
	class nm_Flagreskins
	{
		dir="nm_Flagreskins";
		name="nm_Flagreskins";
		credits="n3msi & Buddy";
		author="n3msi & Buddy";
		authorID="0";
		version="1.25";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World",
			"Game"
		};
	};
};
/* 
to add new flags, follow the examples. Add class nm_Flag25 at the bottom of this file and nm_Flag25_co.paa in nm_Flagreskins\flags\data\
repack into your servermod
add your new nm_Flag25 to your types.xml
give credit to Buddy and n3msi
*/
class cfgVehicles
{
	class Flag_Base;
	class nm_Flag1: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag1_co.paa"
		};
	};
	class nm_Flag2: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag2_co.paa"
		};
	};
	class nm_Flag3: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag3_co.paa"
		};
	};
	class nm_Flag4: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag4_co.paa"
		};
	};
	class nm_Flag5: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag5_co.paa"
		};
	};
	class nm_Flag6: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag6_co.paa"
		};
	};
	class nm_Flag7: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag7_co.paa"
		};
	};
	class nm_Flag8: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag8_co.paa"
		};
	};
	class nm_Flag9: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag9_co.paa"
		};
	};
	class nm_Flag10: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag10_co.paa"
		};
	};
	class nm_Flag11: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag11_co.paa"
		};
	};
	class nm_Flag12: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag12_co.paa"
		};
	};
	class nm_Flag13: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag13_co.paa"
		};
	};
	class nm_Flag14: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag14_co.paa"
		};
	};
	class nm_Flag15: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag15_co.paa"
		};
	};
	class nm_Flag16: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag16_co.paa"
		};
	};
	class nm_Flag17: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag17_co.paa"
		};
	};
	class nm_Flag18: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag18_co.paa"
		};
	};
	class nm_Flag19: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag19_co.paa"
		};
	};
	class nm_Flag20: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag20_co.paa"
		};
	};
	class nm_Flag21: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag21_co.paa"
		};
	};
	class nm_Flag22: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag22_co.paa"
		};
	};
	class nm_Flag23: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag23_co.paa"
		};
	};
	class nm_Flag24: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nm_Flagreskins\flags\data\nm_Flag24_co.paa"
		};
	};
//// add new class nm_Flag25: Flag_Base here
};
