/* This file is part of nSkinz by namazso, licensed under the MIT license:
*
* MIT License
*
* Copyright (c) namazso 2018
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/
#include "item_definitions.hpp"
// These are std::vectors because else I'd have to write their size in the header or write my own container

// We need these for overriding viewmodels and icons
const game_data::weapon_info* game_data::get_weapon_info(int defindex)
{
	const static std::map<int, weapon_info> info =
	{
		{WEAPON_KNIFE,{"models/weapons/w_knife_default_ct.mdl", "models/weapons/v_knife_default_ct.mdl", "knife_default_ct"}},
		{WEAPON_KNIFE_T,{"models/weapons/w_knife_default_t.mdl", "models/weapons/v_knife_default_t.mdl", "knife_t"}},
		{WEAPON_KNIFE_BAYONET, {"models/weapons/w_knife_bayonet.mdl", "models/weapons/v_knife_bayonet.mdl", "bayonet"}},
		{WEAPON_KNIFE_CSS, {"models/weapons/w_knife_css.mdl", "models/weapons/v_knife_css.mdl", "knife_css"}},
		{WEAPON_KNIFE_FLIP, {"models/weapons/w_knife_flip.mdl", "models/weapons/v_knife_flip.mdl", "knife_flip"}},
		{WEAPON_KNIFE_GUT, {"models/weapons/w_knife_gut.mdl", "models/weapons/v_knife_gut.mdl", "knife_gut"}},
		{WEAPON_KNIFE_KARAMBIT, {"models/weapons/w_knife_karam.mdl", "models/weapons/v_knife_karam.mdl", "knife_karambit"}},
		{WEAPON_KNIFE_M9_BAYONET, {"models/weapons/w_knife_m9_bay.mdl", "models/weapons/v_knife_m9_bay.mdl", "knife_m9_bayonet"}},
		{WEAPON_KNIFE_TACTICAL, {"models/weapons/w_knife_tactical.mdl", "models/weapons/v_knife_tactical.mdl", "knife_tactical"}},
		{WEAPON_KNIFE_FALCHION, {"models/weapons/w_knife_falchion_advanced.mdl", "models/weapons/v_knife_falchion_advanced.mdl", "knife_falchion"}},
		{WEAPON_KNIFE_SURVIVAL_BOWIE, {"models/weapons/w_knife_survival_bowie.mdl", "models/weapons/v_knife_survival_bowie.mdl", "knife_survival_bowie"}},
		{WEAPON_KNIFE_BUTTERFLY, {"models/weapons/w_knife_butterfly.mdl", "models/weapons/v_knife_butterfly.mdl", "knife_butterfly"}},
		{WEAPON_KNIFE_PUSH, {"models/weapons/w_knife_push.mdl", "models/weapons/v_knife_push.mdl", "knife_push"}},
		{WEAPON_KNIFE_CORD, {"models/weapons/w_knife_cord.mdl", "models/weapons/v_knife_cord.mdl", "knife_cord"}},
		{WEAPON_KNIFE_CANIS, {"models/weapons/w_knife_canis.mdl", "models/weapons/v_knife_canis.mdl", "knife_canis"}},
		{WEAPON_KNIFE_URSUS,{"models/weapons/w_knife_ursus.mdl", "models/weapons/v_knife_ursus.mdl", "knife_ursus"}},
		{WEAPON_KNIFE_GYPSY_JACKKNIFE,{"models/weapons/w_knife_gypsy_jackknife.mdl", "models/weapons/v_knife_gypsy_jackknife.mdl", "knife_gypsy_jackknife"}},
		{WEAPON_KNIFE_OUTDOOR,{"models/weapons/w_knife_outdoor.mdl", "models/weapons/v_knife_outdoor.mdl", "knife_outdoor"}},
		{WEAPON_KNIFE_STILETTO,{"models/weapons/w_knife_stiletto.mdl", "models/weapons/v_knife_stiletto.mdl", "knife_stiletto"}},
		{WEAPON_KNIFE_WIDOWMAKER,{"models/weapons/w_knife_widowmaker.mdl", "models/weapons/v_knife_widowmaker.mdl", "knife_widowmaker"}},
		{WEAPON_KNIFE_SKELETON,{"models/weapons/w_knife_skeleton.mdl", "models/weapons/v_knife_skeleton.mdl", "knife_skeleton"}},
		{GLOVE_STUDDED_BLOODHOUND,{"models/weapons/w_models/arms/w_glove_bloodhound.mdl", "models/weapons/v_models/arms/glove_bloodhound/v_glove_bloodhound.mdl"}},
		{GLOVE_T_SIDE,{"models/weapons/w_models/arms/w_glove_fingerless.mdl","models/weapons/v_models/arms/glove_fingerless/v_glove_fingerless.mdl"}},
		{GLOVE_CT_SIDE,{"models/weapons/w_models/arms/w_glove_hardknuckle.mdl","models/weapons/v_models/arms/glove_hardknuckle/v_glove_hardknuckle.mdl"}},
		{GLOVE_SPORTY,{"models/weapons/w_models/arms/w_glove_sporty.mdl","models/weapons/v_models/arms/glove_sporty/v_glove_sporty.mdl"}},
		{GLOVE_SLICK,{"models/weapons/w_models/arms/w_glove_slick.mdl","models/weapons/v_models/arms/glove_slick/v_glove_slick.mdl"}},
		{GLOVE_LEATHER_WRAP,{"models/weapons/w_models/arms/w_glove_handwrap_leathery.mdl","models/weapons/v_models/arms/glove_handwrap_leathery/v_glove_handwrap_leathery.mdl"}},
		{GLOVE_MOTORCYCLE,{"models/weapons/w_models/arms/w_glove_motorcycle.mdl","models/weapons/v_models/arms/glove_motorcycle/v_glove_motorcycle.mdl"}},
		{GLOVE_SPECIALIST,{"models/weapons/w_models/arms/w_glove_specialist.mdl","models/weapons/v_models/arms/glove_specialist/v_glove_specialist.mdl"}},
		{GLOVE_HYDRA,{"models/weapons/w_models/arms/w_glove_bloodhound_hydra.mdl","models/weapons/v_models/arms/glove_bloodhound_hydra/v_glove_bloodhound_hydra.mdl"}},
		{GLOVE_BROKEN_FANG,{"models/weapons/w_models/arms/w_glove_bloodhound_brokenfang.mdl","models/weapons/v_models/arms/glove_bloodhound/v_glove_bloodhound_brokenfang.mdl"}}
	};

	const auto entry = info.find(defindex);
	return entry == end(info) ? nullptr : &entry->second;
}

const std::vector<game_data::weapon_name> game_data::knife_names =
{
	{0, "默认"},
	{WEAPON_KNIFE_BAYONET, "刺刀"},
	{WEAPON_KNIFE_CSS, "海豹短刀"},
	{WEAPON_KNIFE_FLIP, "折叠刀"},
	{WEAPON_KNIFE_GUT, "穿肠刀"},
	{WEAPON_KNIFE_KARAMBIT, "爪子刀"},
	{WEAPON_KNIFE_M9_BAYONET, "M9刺刀"},
	{WEAPON_KNIFE_TACTICAL, "猎杀者匕首"},
	{WEAPON_KNIFE_FALCHION, "弯刀"},
	{WEAPON_KNIFE_SURVIVAL_BOWIE, "鲍伊猎刀"},
	{WEAPON_KNIFE_BUTTERFLY, "蝴蝶刀"},
	{WEAPON_KNIFE_PUSH, "暗影双匕"},
	{WEAPON_KNIFE_CORD, "伞绳匕首"},
	{WEAPON_KNIFE_CANIS, "求生匕首"},
	{WEAPON_KNIFE_URSUS, "熊刀"},
	{WEAPON_KNIFE_GYPSY_JACKKNIFE, "纳瓦亚刀"},
	{WEAPON_KNIFE_OUTDOOR, "游牧匕首"},
	{WEAPON_KNIFE_STILETTO, "短剑"},
	{WEAPON_KNIFE_WIDOWMAKER, "锯齿爪刀"},
	{WEAPON_KNIFE_SKELETON, "骷髅匕首"}
};

const std::vector<game_data::weapon_name> game_data::glove_names =
{
	{0, "默认"},
	{GLOVE_STUDDED_BLOODHOUND, "猎犬手套"},
	{GLOVE_T_SIDE, "默认 (恐怖分子)"},
	{GLOVE_CT_SIDE, "默认 (反恐精英)"},
	{GLOVE_SPORTY, "运动手套"},
	{GLOVE_SLICK, "驾驶手套"},
	{GLOVE_LEATHER_WRAP, "裹手"},
	{GLOVE_MOTORCYCLE, "摩托手套"},
	{GLOVE_SPECIALIST, "专属手套"},
	{GLOVE_HYDRA, "九头蛇手套"},
	{GLOVE_BROKEN_FANG, "狂牙手套"}
};

const std::vector<game_data::weapon_name> game_data::weapon_names =
{
	{WEAPON_KNIFE, "匕首"},
	{GLOVE_T_SIDE, "手套"},
	{7, "AK-47"},
	{8, "AUG"},
	{9, "AWP"},
	{63, "CZ75 自动手枪"},
	{1, "沙漠之鹰"},
	{2, "双持贝瑞塔"},
	{10, "法玛斯"},
	{3, "FN57"},
	{11, "G3SG1"},
	{13, "加利尔 AR"},
	{4, "格洛克 18 型"},
	{14, "M249"},
	{60, "M4A1 消音版"},
	{16, "M4A4"},
	{17, "MAC-10"},
	{27, "MAG-7"},
	{23, "MP5-SD"},
	{33, "MP7"},
	{34, "MP9"},
	{28, "内格夫"},
	{35, "新星"},
	{32, "P2000"},
	{36, "P250"},
	{19, "P90"},
	{26, "PP-野牛"},
	{64, "R8 左轮手枪"},
	{29, "截断霰弹枪"},
	{38, "SCAR-20"},
	{40, "SSG 08"},
	{39, "SG 553"},
	{30, "Tec-9"},
	{24, "UMP-45"},
	{61, "USP-S"},
	{25, "XM1014"},
};

const std::vector<game_data::quality_name> game_data::quality_names =
{
	{0, "Default"},
	{1, "Genuine"},
	{2, "Vintage"},
	{3, "Unusual"},
	{5, "Community"},
	{6, "Developer"},
	{7, "Self-Made"},
	{8, "Customized"},
	{9, "Strange"},
	{10, "Completed"},
	{12, "Tournament"}
};
