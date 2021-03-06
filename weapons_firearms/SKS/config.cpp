class CfgPatches
{
	class DZ_Weapons_Firearms_SKS
	{
		units[]=
		{
			"SKS",
			"SKS_Black",
			"SKS_Green"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};
class cfgRecoils
{
	recoil_sks[]=
	{
		0,
		0,
		0,
		0.039999999,
		"0.036943*(0.5)",
		"0.0134348*(2)",
		0.079999998,
		"0.019755*(0.5)",
		"0.003056*(2)",
		0.090000004,
		0,
		0,
		0.14,
		"-0.003138*(0.5)",
		"-0.0005*(2)",
		0.079999998,
		"-0.001177*(0.5)",
		"-0.000188*(2)",
		0.12,
		0,
		0
	};
	recoil_sks_prone[]=
	{
		0,
		0,
		0,
		0.039999999,
		"0.036943*(0.3)",
		"0.0134348*(1)",
		0.079999998,
		"0.019755*(0.3)",
		"0.003056*(1)",
		0.090000004,
		0,
		0,
		0.14,
		"-0.003138*(0.3)",
		"-0.0005*(1)",
		0.079999998,
		"-0.001177*(0.3)",
		"-0.000188*(1)",
		0.12,
		0,
		0
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Rifle;
	class SKSBase: Rifle
	{
		absorbency=0.1;
		scope=0;
		cursor="aimBowGhost";
		displayName="SKS";
		descriptionShort="The SKS is a Soviet semi-automatic carbine chambered for the 7.62×39mm round, designed in 1943 by Sergei Gavrilovich Simonov. Its complete designation, SKS-45, is an initialism for Samozaryadnyj Karabin sistemy Simonova, 1945 or SKS 45. In the early 1950s, the Soviets took the SKS carbine out of front-line service and replaced it with the AK-47; however, the SKS remained in second-line service for decades. It is still used as a ceremonial arm today.";
		model="\dz\weapons\firearms\SKS\SKS.p3d";
		itemSize[]={6,3};
		repairableWith=1;
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		lootTag[]=
		{
			"Military_east"
		};
		class NoiseShoot
		{
			strength=125;
			type="shot";
		};
		recoilModifier="[1, 2.5, 1.5]";
		value=0;
		dexterity=2.5;
		optics=1;
		opticsFlare=0;
		chamberSize=10;
		chamberedRound="";
		camberableFrom[]=
		{
			"Ammo_762x39",
			"Clip_762x39_10Rnd"
		};
		magazines[]={};
		modes[]=
		{
			"Single"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\SKS\SKS_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\SKS\SKS_reloading",
			0.80000001,
			1,
			20
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\DZ\anims\data\anim\sdr\ik\weapons\SKS.rtm"
		};
		baseAttachments[]={};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"dz\sounds\weapons\firearms\SKS\SKS_close_0",
				1,
				1,
				1000
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\SKS\SKS_close_1",
				1,
				1,
				1000
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\SKS\SKS_close_2",
				1,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin2",
				0.33333001
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4Silenced",
				1,
				1,
				150
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
			reloadTime=0.1;
			recoil="recoil_sks";
			recoilProne="recoil_sks_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		ejectType=1;
		reloadAction="ReloadSks";
		attachments[]=
		{
			"weaponOpticsMosin",
			"weaponBayonetSKS",
			"weaponWrap",
			"suppressorImpro"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\SKS\data\sks_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\SKS\data\sks.rvmat"
		};
	};
	class SKS: SKSBase
	{
		scope=2;
		barrelArmor=2200;
		weight=3850;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\SKS\Data\sks.rvmat",
				"DZ\weapons\firearms\SKS\Data\sks_damage.rvmat",
				"DZ\weapons\firearms\SKS\Data\sks_destruct.rvmat"
			};
		};
	};
	class SKS_Black: SKSBase
	{
		scope=1;
		descriptionShort="The SKS is a Soviet semi-automatic carbine chambered for the 7.62×39mm round, designed in 1943 by Sergei Gavrilovich Simonov. Its complete designation, SKS-45, is an initialism for Samozaryadnyj Karabin sistemy Simonova, 1945 or SKS 45. In the early 1950s, the Soviets took the SKS carbine out of front-line service and replaced it with the AK-47; however, the SKS remained in second-line service for decades. It is still used as a ceremonial arm today. This one was painted black.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\SKS\data\sks_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\SKS\data\sks_painted.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\SKS\Data\sks.rvmat",
				"DZ\weapons\firearms\SKS\Data\sks_damage.rvmat",
				"DZ\weapons\firearms\SKS\Data\sks_destruct.rvmat"
			};
		};
	};
	class SKS_Green: SKSBase
	{
		scope=1;
		descriptionShort="The SKS is a Soviet semi-automatic carbine chambered for the 7.62×39mm round, designed in 1943 by Sergei Gavrilovich Simonov. Its complete designation, SKS-45, is an initialism for Samozaryadnyj Karabin sistemy Simonova, 1945 or SKS 45. In the early 1950s, the Soviets took the SKS carbine out of front-line service and replaced it with the AK-47; however, the SKS remained in second-line service for decades. It is still used as a ceremonial arm today. This one was painted green.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\SKS\data\sks_green_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\SKS\data\sks_painted.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\SKS\Data\sks.rvmat",
				"DZ\weapons\firearms\SKS\Data\sks_damage.rvmat",
				"DZ\weapons\firearms\SKS\Data\sks_destruct.rvmat"
			};
		};
	};
};
