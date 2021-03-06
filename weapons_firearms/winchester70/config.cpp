class CfgPatches
{
	class DZ_Weapons_Firearms_Winchester70
	{
		units[]=
		{
			"Winchester70",
			"Winchester70_Black",
			"Winchester70_Green"
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
	recoil_Winchester[]=
	{
		0,
		0,
		0,
		0.039999999,
		"0.036943*(0.8)",
		"0.0134348*(2.3)",
		0.079999998,
		"0.019755*(0.8)",
		"0.003056*(2.3)",
		0.090000004,
		0,
		0,
		0.14,
		"-0.003138*(0.8)",
		"-0.0005*(2.3)",
		0.079999998,
		"-0.001177*(0.8)",
		"-0.000188*(2.3)",
		0.12,
		0,
		0
	};
	recoil_Winchester_prone[]=
	{
		0,
		0,
		0,
		0.0040000002,
		"0.036943*(0.01)",
		"0.0134348*(0.1)",
		0.0080000004,
		"0.019755*(0.01)",
		"0.003056*(0.1)",
		0.0089999996,
		0,
		0,
		0.014,
		"-0.003138*(0.01)",
		"-0.0005*(0.1)",
		0.0080000004,
		"-0.001177*(0.01)",
		"-0.000188*(0.1)",
		0.012,
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
	class Winchester70Base: Rifle
	{
		absorbency=0.1;
		scope=0;
		displayName="Winchester model 70";
		descriptionShort="Winchester model 70 is a bolt action sporting rifle with an iconic place in American sporting culture and has been held in high regard by shooters ever since it was introduced. Trigger creep has been virtually eliminated in the new Model 70, it also uses M.O.A. trigger system that has no take up.";
		model="\dz\weapons\firearms\winchester70\winchester70.p3d";
		repairableWith=1;
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		barrelArmor=1800;
		weight=2721;
		value=0;
		dexterity=3.3;
		optics=1;
		opticsFlare=0;
		chamberSize=5;
		chamberedRound="";
		camberableFrom[]=
		{
			"Ammo_308Win"
		};
		magazines[]={};
		modes[]=
		{
			"Single"
		};
		lootTag[]=
		{
			"Civilian",
			"Hunting"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\mosin9130\mosin_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\winchester70\winchester70_reload",
			0.80000001,
			1,
			20
		};
		reloadSound[]=
		{
			"dz\sounds\weapons\firearms\winchester70\winchester70_cycle",
			0.80000001,
			1,
			20
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\DZ\anims\data\anim\sdr\ik\weapons\winchester70.rtm"
		};
		baseAttachments[]={};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"dz\sounds\weapons\firearms\winchester70\winchester70_0",
				1,
				1,
				1000
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\winchester70\winchester70_1",
				1,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				0.5,
				"begin2",
				0.5
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
			reloadTime=2;
			recoil="recoil_Winchester";
			recoilProne="recoil_Winchester_prone";
			dispersion=0.001;
			magazineSlot="magazine";
		};
		ejectType=0;
		reloadAction="ReloadWinchester70";
		shotAction="ReloadWinchester70_shot";
		attachments[]=
		{
			"weaponWrap",
			"suppressorImpro",
			"weaponBipod",
			"weaponOpticsHunting"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\winchester70\data\winchester70_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\winchester70\data\winchester70.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\winchester70\data\winchester70.rvmat",
				"DZ\weapons\firearms\winchester70\data\winchester70_damage.rvmat",
				"DZ\weapons\firearms\winchester70\data\winchester70_destruct.rvmat"
			};
		};
		recoilModifier="[1, 5, 1.75]";
	};
	class Winchester70: Winchester70Base
	{
		scope=2;
		animName="Winchester70";
	};
	class Winchester70_Black: Winchester70
	{
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\winchester70\data\winchester70.rvmat",
				"DZ\weapons\firearms\winchester70\data\winchester70_damage.rvmat",
				"DZ\weapons\firearms\winchester70\data\winchester70_destruct.rvmat"
			};
		};
	};
	class Winchester70_Green: Winchester70Base
	{
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\firearms\winchester70\data\winchester70.rvmat",
				"DZ\weapons\firearms\winchester70\data\winchester70_damage.rvmat",
				"DZ\weapons\firearms\winchester70\data\winchester70_destruct.rvmat"
			};
		};
	};
};
