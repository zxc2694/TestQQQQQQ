#include "stdafx.h"
#include "MFCApplication.h"
#include "MFCApplicationDlg.h"
#include "afxdialogex.h"
#include "functions.h"

int button_Read(int *d) // How many day are selected
{
	int n = 0;
	for (int i = 0; i < 31; i++)
	{
		if (d[i] == 1)
			n++;
	}
	return n;
}

void getDayWord(int Day, Words &myWords)
{
	if (Day == 1)
		getWords_Day1(myWords);

	if (Day == 2)
		getWords_Day2(myWords);

	if (Day == 3)
		getWords_Day3(myWords);

	if (Day == 4)
		getWords_Day4(myWords);

	if (Day == 5)
		getWords_Day5(myWords);

	if (Day == 6)
		getWords_Day6(myWords);

	if (Day == 7)
		getWords_Day7(myWords);

	if (Day == 8)
		getWords_Day8(myWords);

	if (Day == 9)
		getWords_Day9(myWords);

	if (Day == 10)
		getWords_Day10(myWords);

	if (Day == 11)
		getWords_Day11(myWords);

	if (Day == 12)
		getWords_Day12(myWords);

	if (Day == 13)
		getWords_Day13(myWords);

	if (Day == 14)
		getWords_Day14(myWords);

	if (Day == 15)
		getWords_Day15(myWords);

	if (Day == 16)
		getWords_Day16(myWords);

	if (Day == 17)
		getWords_Day17(myWords);

	if (Day == 18)
		getWords_Day18(myWords);

	if (Day == 19)
		getWords_Day19(myWords);

	if (Day == 20)
		getWords_Day20(myWords);

	if (Day == 21)
		getWords_Day21(myWords);

	if (Day == 22)
		getWords_Day22(myWords);

	if (Day == 23)
		getWords_Day23(myWords);

	if (Day == 24)
		getWords_Day24(myWords);

	if (Day == 25)
		getWords_Day25(myWords);

	if (Day == 26)
		getWords_Day26(myWords);

	if (Day == 27)
		getWords_Day27(myWords);

	if (Day == 28)
		getWords_Day28(myWords);

	if (Day == 29)
		getWords_Day29(myWords);

	if (Day == 30)
		getWords_Day30(myWords);
}

void getWords_Day1(Words &words)
{
}
void getWords_Day2(Words &words)
{
}
void getWords_Day3(Words &words)
{
}
void getWords_Day4(Words &words)
{
}
void getWords_Day5(Words &words)
{
}
void getWords_Day6(Words &words)
{
}
void getWords_Day7(Words &words)
{
}
void getWords_Day8(Words &words)
{
}
void getWords_Day9(Words &words)
{
}
void getWords_Day10(Words &words)
{
}
void getWords_Day11(Words &words)
{
}
void getWords_Day12(Words &words)
{
}
void getWords_Day13(Words &words)
{
}
void getWords_Day14(Words &words)
{
}
void getWords_Day15(Words &words)
{
}
void getWords_Day16(Words &words)
{
}
void getWords_Day17(Words &words)
{
}
void getWords_Day18(Words &words)
{
}
void getWords_Day19(Words &words)
{
}
void getWords_Day20(Words &words)
{
}
void getWords_Day21(Words &words)
{
}
void getWords_Day22(Words &words)
{
}
void getWords_Day23(Words &words)
{
	words.word[0] = _T("constitute"); words.number[0] = 2201; words.chinese[0] = _T("v. 構成、設立");	 words.ps[0] = _T("\r\nps. constitution (n) 憲法、章程、組成；constitutional (adj) 憲法的、體格的");
	words.word[1] = _T("breakdown"); words.number[1] = 2204; words.chinese[1] = _T("n. 故障、毀損、破裂");	 words.ps[1] = _T("");
	words.word[2] = _T("originate"); words.number[2] = 2208; words.chinese[2] = _T("v. 發源地、來自、創始");	 words.ps[2] = _T("\r\nps. original (adj) 原創的、本來的；originally (adv) 原來、起初");
	words.word[3] = _T("receivable"); words.number[3] = 2211; words.chinese[3] = _T("adj. 應收款的、可接受的");	 words.ps[3] = _T("");
	words.word[4] = _T("consulate"); words.number[4] = 2214; words.chinese[4] = _T("n. 領事館");	 words.ps[4] = _T("");
	words.word[5] = _T("circulate"); words.number[5] = 2217; words.chinese[5] = _T("v. 傳閱(物品、資訊等)、流通、循環、傳播");	 words.ps[5] = _T("\r\nps. circulation (n) 循環、流通");
	words.word[6] = _T("sequel"); words.number[6] = 2220; words.chinese[6] = _T("n. (電影、書的) 續集、隨之而來的事");	 words.ps[6] = _T("");
	words.word[7] = _T("adverse"); words.number[7] = 2222; words.chinese[7] = _T("adj. 負面的、有害的、不利的、敵對的");	 words.ps[7] = _T("\r\nps. adversely (adv) 負面地、不利地");
	words.word[8] = _T("frustrated"); words.number[8] = 2226; words.chinese[8] = _T("adj. 懊惱的、洩氣的、挫折的");	 words.ps[8] = _T("\r\nps. frustrate (v) 使挫敗、使挫折、防止；frustration (n) 挫折、沮喪");
	words.word[9] = _T("prosperous"); words.number[9] = 2229; words.chinese[9] = _T("adj. 成功的、興旺的、繁榮的");	 words.ps[9] = _T("\r\nps. prosperity (n) 繁榮、興旺、成功");
	words.word[10] = _T("breakage"); words.number[10] = 2232; words.chinese[10] = _T("n. 破損、毀壞");	 words.ps[10] = _T("");
	words.word[11] = _T("constantly"); words.number[11] = 2237; words.chinese[11] = _T("adj. 持續地、不斷地");	 words.ps[11] = _T("\r\nps. constant (adj) 接連不斷的、持續的");
	words.word[12] = _T("solely"); words.number[12] = 2240; words.chinese[12] = _T("adv. 單單地");	 words.ps[12] = _T("\r\nps. sole (adj) 僅有、唯一的");
	words.word[13] = _T("expenditure"); words.number[13] = 2242; words.chinese[13] = _T("n. 支出、經費");	 words.ps[13] = _T("\r\nps. 同義詞：costs、expenses");
	words.word[14] = _T("definitive"); words.number[14] = 2245; words.chinese[14] = _T("adj. 最終的、決定性的、最佳的");	 words.ps[14] = _T("\r\nps. definitively (adj) 最終地");
	words.word[15] = _T("fixture"); words.number[15] = 2248; words.chinese[15] = _T("n. (房屋內固定的)裝置、設備");	 words.ps[15] = _T("");
	words.word[16] = _T("ongoing"); words.number[16] = 2252; words.chinese[16] = _T("adj. 持續進行的、不斷發展的");	 words.ps[16] = _T("");
	words.word[17] = _T("compatible"); words.number[17] = 2254; words.chinese[17] = _T("adj. 相容的、能共存的");	 words.ps[17] = _T("\r\nps. compatibility (n) 相容性、並存；相反詞：incompatible (adj) 不相容的");
	words.word[18] = _T("bookkeeper"); words.number[18] = 2257; words.chinese[18] = _T("n. 簿記員");	 words.ps[18] = _T("");
	words.word[19] = _T("demolish"); words.number[19] = 2261; words.chinese[19] = _T("v. 折毀、毀壞、推翻");	 words.ps[19] = _T("\r\nps. demolition (n) 破壞");
	words.word[20] = _T("extraordinary"); words.number[20] = 2265; words.chinese[20] = _T("adj. 非凡的、特別的、驚人的、特派的");	 words.ps[20] = _T("\r\nps. 相反詞：ordinary 普通的、平凡的");
	words.word[21] = _T("loyalty"); words.number[21] = 2266; words.chinese[21] = _T("n. 忠誠度、忠誠");	 words.ps[21] = _T("");
	words.word[22] = _T("consolidate"); words.number[22] = 2274; words.chinese[22] = _T("v. 鞏固(處境、地位)、使堅固、合併");	 words.ps[22] = _T("\r\nps. consolidation (n) 加強、鞏固");
	words.word[23] = _T("perishable"); words.number[23] = 2275; words.chinese[23] = _T("adj. 易腐爛的、易變質的");	 words.ps[23] = _T("\r\nps. perish (v) 腐爛、死去");
	words.word[24] = _T("simplify"); words.number[24] = 2279; words.chinese[24] = _T("v. 簡化、單純化");	 words.ps[24] = _T("\r\nps. simplification (n) 單純化、簡單化；simplicity (n) 簡單、單純");
	words.word[25] = _T("delicate"); words.number[25] = 2283; words.chinese[25] = _T("adj. 棘手的、微妙的、纖細的、脆弱的、精緻的  =  fragile");	 words.ps[25] = _T("");
	words.word[26] = _T("dismissal"); words.number[26] = 2285; words.chinese[26] = _T("n. 解雇、免職、不考慮");	 words.ps[26] = _T("\r\nps. dismiss (v) 解雇、不考慮");
	words.word[27] = _T("inaugurate"); words.number[27] = 2288; words.chinese[27] = _T("v. 舉行開幕/落成典禮、創建、開始");	 words.ps[27] = _T("\r\nps. inauguration (n) 就職、開幕、開始");
	words.word[28] = _T("activate"); words.number[28] = 2292; words.chinese[28] = _T("v. 啟動、活化");	 words.ps[28] = _T("\r\nps. acitve (adj) 積極的、活潑的；activation (n) 活化(作用)；activity (n)活動");
	words.word[29] = _T("reform"); words.number[29] = 2294; words.chinese[29] = _T("v. 改革、革新、改造");	 words.ps[29] = _T("");
	words.word[30] = _T("surplus"); words.number[30] = 2298; words.chinese[30] = _T("n. 盈餘、順差、剩餘、過剩");	 words.ps[30] = _T("");
	words.word[31] = _T("recovery"); words.number[31] = 2300; words.chinese[31] = _T("n. (經濟)回升、復甦、恢復");	 words.ps[31] = _T("\r\nps. recover (v) 恢復、康復、找回");

}
void getWords_Day24(Words &words)
{
	words.word[0] = _T("lessen"); words.number[0] = 2305; words.chinese[0] = _T("v. 減少、減輕、變小");	 words.ps[0] = _T("\r\nps. less (adj) 較小的；(adv) 較小地；\r\n    lesser (adj) 較小的、較少的、次要的；(adv) 較少");
	words.word[1] = _T("obstacle"); words.number[1] = 2307; words.chinese[1] = _T("n. 障礙(物)、阻礙 = obstruction");	 words.ps[1] = _T("");
	words.word[2] = _T("arbitration"); words.number[2] = 2310; words.chinese[2] = _T("n. (紛爭等的)仲裁、裁決");	 words.ps[2] = _T("");
	words.word[3] = _T("installment"); words.number[3] = 2311; words.chinese[3] = _T("n. 分期付款、一集、一節");	 words.ps[3] = _T("");
	words.word[4] = _T("pedestrian"); words.number[4] = 2315; words.chinese[4] = _T("n. 行人；adj. 徒步的、步行的");	 words.ps[4] = _T("");
	words.word[5] = _T("remarkable"); words.number[5] = 2317; words.chinese[5] = _T("adj. 驚人的、出眾的");	 words.ps[5] = _T("\r\nps. remarkably (adv) 非凡地、明顯地");
	words.word[6] = _T("conservation"); words.number[6] = 2320; words.chinese[6] = _T("n. 保護、保存 = preservation");	 words.ps[6] = _T("\r\nps. conserve (v) 保存、保護 = preserve");
	words.word[7] = _T("harsh"); words.number[7] = 2324; words.chinese[7] = _T("adj. 嚴厲的、苛刻的、(條件、環境)困難的");	 words.ps[7] = _T("\r\nps. harshly (adv) 嚴苛地；harshness (n) 苛刻、惡劣");
	words.word[8] = _T("waive"); words.number[8] = 2327; words.chinese[8] = _T("v. 撤回、拋棄(法定權限、權利)");	 words.ps[8] = _T("\r\nps. waiver (n) (權利的)拋棄、棄權");
	words.word[9] = _T("equal"); words.number[9] = 2329; words.chinese[9] = _T("adj. 相等的、相當的；v. 等於；n. 相等的人事物");	 words.ps[9] = _T("\r\nps. equally (adv) 相等地、公平地；equality (n) 同等");
	words.word[10] = _T("lasting"); words.number[10] = 2332; words.chinese[10] = _T("adj. 持久的、耐久的");	 words.ps[10] = _T("\r\nps. last (v) 持續、維持");
	words.word[11] = _T("proficiency"); words.number[11] = 2335; words.chinese[11] = _T("n. 精通、熟練");	 words.ps[11] = _T("");
	words.word[12] = _T("prominent"); words.number[12] = 2339; words.chinese[12] = _T("adj. 著名的、顯眼的、傑出的");	 words.ps[12] = _T("\r\nps. prominently (adv) 顯著地、重要地");
	words.word[13] = _T("simultaneously"); words.number[13] = 2342; words.chinese[13] = _T("adv. 同時地");	 words.ps[13] = _T("\r\nps. simultaneous (adj) 同時的");
	words.word[14] = _T("distract"); words.number[14] = 2345; words.chinese[14] = _T("v. 使分心、轉移'、困擾");	 words.ps[14] = _T("\r\nps. distracting (adj) 令人分心的；distraction (n) 注意力分散、使人分心的事");
	words.word[15] = _T("attest"); words.number[15] = 2348; words.chinese[15] = _T("v. 證實、證明");	 words.ps[15] = _T("");
	words.word[16] = _T("breakthrough"); words.number[16] = 2354; words.chinese[16] = _T("n. 突破、重大進展");	 words.ps[16] = _T("");
	words.word[17] = _T("conditional"); words.number[17] = 2356; words.chinese[17] = _T("adj. 有條件的、以~為條件的");	 words.ps[17] = _T("\r\nps. 相反詞：unconditional (adj) 無條件的");
	words.word[18] = _T("carrier"); words.number[18] = 2360; words.chinese[18] = _T("n. 運輸業、運輸業者");	 words.ps[18] = _T("");
	words.word[19] = _T("inconsistency"); words.number[19] = 2363; words.chinese[19] = _T("n. 不一致的、前後矛盾");	 words.ps[19] = _T("\r\nps. 相反詞：consistency 一貫、一致；\r\n    inconsistent (adj) 不一致的、前後矛盾的");
	words.word[20] = _T("dimension"); words.number[20] = 2365; words.chinese[20] = _T("n. 維度(長/寬/高)、面向、方面 = aspect (1505)");	 words.ps[20] = _T("\r\nps. three-dimensional (adj) 三度空間的");
	words.word[21] = _T("discretion"); words.number[21] = 2368; words.chinese[21] = _T("n. 自行決定權、處理權、謹慎");	 words.ps[21] = _T("\r\nps. discreet (adj) 謹言慎行的、不顯眼的");
	words.word[22] = _T("entail"); words.number[22] = 2371; words.chinese[22] = _T("v. 需要、使必要 = involve (428)");	 words.ps[22] = _T("");
	words.word[23] = _T("entrepreneur"); words.number[23] = 2374; words.chinese[23] = _T("n. 企業家、創業者");	 words.ps[23] = _T("");
	words.word[24] = _T("ballot"); words.number[24] = 2377; words.chinese[24] = _T("n. 選票、投票選舉");	 words.ps[24] = _T("");
	words.word[25] = _T("interpersonal"); words.number[25] = 2378; words.chinese[25] = _T("adj. 人際(關係)的");	 words.ps[25] = _T("");
	words.word[26] = _T("determined"); words.number[26] = 2382; words.chinese[26] = _T("adj. 堅定不移的、果斷的、下定決心的");	 words.ps[26] = _T("\r\nps. determine (v) 使決定、使下決心；determination (n) 堅定、決心");
	words.word[27] = _T("miscellaneous"); words.number[27] = 2385; words.chinese[27] = _T("adj. 各式各樣的、混雜的 = various");	 words.ps[27] = _T("");
	words.word[28] = _T("transcript"); words.number[28] = 2391; words.chinese[28] = _T("n. 謄本、抄本、文字稿 = transcription");	 words.ps[28] = _T("\r\nps. transcribe (v) 謄寫、抄錄");
	words.word[29] = _T("sacrifice"); words.number[29] = 2395; words.chinese[29] = _T("v. 犧牲");	 words.ps[29] = _T("");
	words.word[30] = _T("renewal"); words.number[30] = 2396; words.chinese[30] = _T("n. 續訂、(建築物、地區的)更新、再開發");	 words.ps[30] = _T("\r\nps. renew (v) 使更新、重新開始；renewable (n) 可更新的");
	words.word[31] = _T("stipulate"); words.number[31] = 2400; words.chinese[31] = _T("v. 規定、明確要求");	 words.ps[31] = _T("\r\nps. stipulation (n) 規定、條款");
}
void getWords_Day25(Words &words)
{
	words.word[0] = _T("margin"); words.number[0] = 2402; words.chinese[0] = _T("n. 利潤、頁邊空白、(票數等)差異；\r\nps. marginal (adj) 小的、不重要的；marginally (adv) 少量地、輕微地");
	words.word[1] = _T("glance"); words.number[1] = 2404; words.chinese[1] = _T("v. 瀏覽、(粗略地)看一下、一瞥；n. 一瞥");
	words.word[2] = _T("evacuation"); words.number[2] = 2409; words.chinese[2] = _T("n. 疏散、撤離、徹空；\r\nps. evacuate (v) 撤空、撤離");
	words.word[3] = _T("courtesy"); words.number[3] = 2411; words.chinese[3] = _T("adj. 免費的、禮貌的；n. 禮貌、客氣話；\r\nps. courteous (adj.) 有禮貌的");
	words.word[4] = _T("neglect"); words.number[4] = 2414; words.chinese[4] = _T("v. 忽視、忽略、疏忽、疏漏；n. 疏忽、忽略；\r\nps. negligent (adj) 疏忽的、粗心的；negligence (n) 疏忽、怠忽職守");
	words.word[5] = _T("conglomerate"); words.number[5] = 2416; words.chinese[5] = _T("n.  企業集團；adj. 企業集團的");
	words.word[6] = _T("counterfeit"); words.number[6] = 2419; words.chinese[6] = _T("adj. 偽造的、假冒的；v. 偽造、仿造；n. 偽造物、假貨");
	words.word[7] = _T("elevate"); words.number[7] = 2424; words.chinese[7] = _T("v. 抬高、舉起、提升；\r\nps. elevated (adj) 升高的、高架的、高尚的；elevation (n) 升高、高度\r\n    elevator 電梯");
	words.word[8] = _T("altitude"); words.number[8] = 2428; words.chinese[8] = _T("n. 高度、海拔");
	words.word[9] = _T("imperative"); words.number[9] = 2429; words.chinese[9] = _T("adj. 極重要的、必要的、急需處理的；n. 重要緊急的事、必要的事");
	words.word[10] = _T("artificial"); words.number[10] = 2433; words.chinese[10] = _T("adj. 人工的、人造的");
	words.word[11] = _T("condense"); words.number[11] = 2436; words.chinese[11] = _T("v. 濃縮、縮減；\r\nps. condensation (n.) 濃縮、凝結");
	words.word[12] = _T("corridor"); words.number[12] = 2439; words.chinese[12] = _T("n. 走廊、通道 = hallway");
	words.word[13] = _T("element"); words.number[13] = 2442; words.chinese[13] = _T("n. (構成的)要素、元素、(電子產品)元件、基本原理");
	words.word[14] = _T("alter"); words.number[14] = 2445; words.chinese[14] = _T("v. 改變、變更；\r\nps. alteration n. 改變、更改");
	words.word[15] = _T("injection"); words.number[15] = 2449; words.chinese[15] = _T("n. 注射、注入；\r\nps. inject (v) 注射、(資金等)投入");
	words.word[16] = _T("array"); words.number[16] = 2453; words.chinese[16] = _T("n.  一系列、大批、大量；v. 布置、排列");
	words.word[17] = _T("immune"); words.number[17] = 2456; words.chinese[17] = _T("adj. 免疫的、不受影響的；\r\nps. immunity (n.) 免疫、免疫力、豁免權；immunize (v) 使免疫；\r\n    immunization (n) 免疫");
	words.word[18] = _T("foster"); words.number[18] = 2459; words.chinese[18] = _T("v. 助長、促進、培養、鼓勵、代養");
	words.word[19] = _T("blame"); words.number[19] = 2461; words.chinese[19] = _T("v. 把~歸咎於；責備；\r\nps. blameless (adj) 無可責備、無過失的");
	words.word[20] = _T("convence"); words.number[20] = 2464; words.chinese[20] = _T("v. (會議)召開、召集");
	words.word[21] = _T("equivalent"); words.number[21] = 2468; words.chinese[21] = _T("adj. 相同的、等值的；n. 同等物、等價物；\r\nps. equivalence (n) 相等、等值");
	words.word[22] = _T("inhale"); words.number[22] = 2474; words.chinese[22] = _T("v. 吸入、吸氣；\r\nps. inhalation (n) 吸入");
	words.word[23] = _T("mutual"); words.number[23] = 2475; words.chinese[23] = _T("adj. 相互的、共同的；\r\nps. mutually (adv) 互相地、彼此地、共同地");
	words.word[24] = _T("aggressive"); words.number[24] = 2480; words.chinese[24] = _T("adj.  大膽的、志在必得的、侵略性的、積極活躍的；\r\nps. aggressively (adv) 侵略性地");
	words.word[25] = _T("biography"); words.number[25] = 2483; words.chinese[25] = _T("n. 傳記；\r\nps. biographical (adj) 傳記的；autobiography (n) 自傳");
	words.word[26] = _T("forbid"); words.number[26] = 2486; words.chinese[26] = _T("v. 妨礙、禁止 = prohibit (1200)");
	words.word[27] = _T("immigration"); words.number[27] = 2488; words.chinese[27] = _T("n. (從外國)移民、移居；\r\nps. 相反詞：emigration (n) 移居外國、移民出境；\r\n    immigrate (v) 遷移、移民；immigrant (n) (外來的)移民");
	words.word[28] = _T("renowned"); words.number[28] = 2491; words.chinese[28] = _T("adj. 聞名的、有聲望的；\r\nps. renown (n) 名聲、聲望");
	words.word[29] = _T("adjacent"); words.number[29] = 2493; words.chinese[29] = _T("adj. 鄰近的、相鄰的");
	words.word[30] = _T("scheme"); words.number[30] = 2497; words.chinese[30] = _T("n. 計畫(案])、方案、計謀；v. 計畫、擬定計畫");
	words.word[31] = _T("obscure"); words.number[31] = 2500; words.chinese[31] = _T("adj. 鮮為人知的、模糊的、暗的；v. 使變暗、使難理解、混淆；\r\nps. obviously (adv) 費解地");

}
void getWords_Day26(Words &words)
{
	words.word[0] = _T("amusement"); words.number[0] = 2506; words.chinese[0] = _T("n. 娛樂、愉悅、娛樂活動；\r\nps. amuse (v) 使~開心、娛樂");
	words.word[1] = _T("identical"); words.number[1] = 2508; words.chinese[1] = _T("adj. 完全一樣、相同的；\r\nps. identification (n)(297) 鑑別、身分證明、認同；identity (n) 身分、相同");
	words.word[2] = _T("besides"); words.number[2] = 2510; words.chinese[2] = _T("prep. 除~之外、在~之外 = in addition to ；adv. 此外、而且");
	words.word[3] = _T("amenity"); words.number[3] = 2512; words.chinese[3] = _T("n. 便利設施、娛樂設施、舒適、適意");
	words.word[4] = _T("mortage"); words.number[4] = 2515; words.chinese[4] = _T("n. 抵押貸款；v. 抵押");
	words.word[5] = _T("adamantly"); words.number[5] = 2517; words.chinese[5] = _T("dav. 堅決地；\r\nps. adamant (adj.) 堅決的、堅定的");
	words.word[6] = _T("accelerate"); words.number[6] = 2518; words.chinese[6] = _T("v. 加速、促進、(期間的)提前；\r\nps. acceleration (n) 加速");
	words.word[7] = _T("belongings"); words.number[7] = 2522; words.chinese[7] = _T("n. 所有物、財產 = possessions");
	words.word[8] = _T("delinquent"); words.number[8] = 2526; words.chinese[8] = _T("adj. 拖欠未繳的、到期未付的、有過失的");
	words.word[9] = _T("consultation"); words.number[9] = 2529; words.chinese[9] = _T("n. 諮詢、商議、會診；\r\nps. consultant (n.) 顧問");
	words.word[10] = _T("diverse"); words.number[10] = 2532; words.chinese[10] = _T("adj. 不同的、多樣的；\r\nps. diversity (n) 多樣性；diversify (v) 使多元化、使多樣化");
	words.word[11] = _T("beneficiary"); words.number[11] = 2527; words.chinese[11] = _T("n. 受益人、受惠者；\r\nps. Benefit (n)(178) 利益、好處；beneficial (adj) 有利的、有益的");
	words.word[12] = _T("engage"); words.number[12] = 2540; words.chinese[12] = _T("v. 使從事、使忙於、吸引住、與~交戰；\r\nps. engaged (adj) 已訂婚的、被占用的、忙於~的；\r\n    engagement (n) 約會、訂婚、任務");
	words.word[13] = _T("accumulation"); words.number[13] = 2542; words.chinese[13] = _T("n. 積聚、累積(數量)、逐漸增加；\r\nps. accumulate (v) 累積、積聚");
	words.word[14] = _T("merit"); words.number[14] = 2546; words.chinese[14] = _T("n. 優點、價值");
	words.word[15] = _T("tangible"); words.number[15] = 2548; words.chinese[15] = _T("adj. 實質的、有形的、可觸的；\r\nps. 相反詞：intangible (adj.) 無形的");
	words.word[16] = _T("vague"); words.number[16] = 2555; words.chinese[16] = _T("adj. 模糊的、含糊的、不明確的");
	words.word[17] = _T("notable"); words.number[17] = 2556; words.chinese[17] = _T("adj. 顯著的、值得留意的、有名的；\r\nps. note (v) 注意、提及；noted (adj) 著名的");
	words.word[18] = _T("obviously"); words.number[18] = 2560; words.chinese[18] = _T("adv. 顯然地、明顯地；\r\nps. obvious (adj) 明顯的、分明的");
	words.word[19] = _T("patent"); words.number[19] = 2562; words.chinese[19] = _T("n. 專利權、權利；adj. 專利的、明顯的；v. 取得專利權");
	words.word[20] = _T("outskirts"); words.number[20] = 2566; words.chinese[20] = _T("n. 郊區、郊外");
	words.word[21] = _T("altruism"); words.number[21] = 2569; words.chinese[21] = _T("n. 利他心理、利他主義；\r\nps. altruistic (adj) 利他的");
	words.word[22] = _T("protocol"); words.number[22] = 2571; words.chinese[22] = _T("n. (國家之間的)協議、條約草案、(外交)禮節、(電腦)通訊協定");
	words.word[23] = _T("troubleshooting"); words.number[23] = 2574; words.chinese[23] = _T("n. 疑難排解；\r\nps. troubleshooter (n) 疑難排解者、檢修人員");
	words.word[24] = _T("impose"); words.number[24] = 2579; words.chinese[24] = _T("v. (規定等的) 強制實行、強加、使接受(意見)");
	words.word[25] = _T("resistance"); words.number[25] = 2580; words.chinese[25] = _T("n. 反抗、抵抗、抵制、抵抗力；\r\nps. resistant (adj) 抵抗的；resist (v) 對抗、抵擋");
	words.word[26] = _T("retrieval"); words.number[26] = 2584; words.chinese[26] = _T("(v) 檢索、擷取、取回、重獲；\r\nps. retrieve (v) 檢索、擷取、取回、重獲");
	words.word[27] = _T("detach"); words.number[27] = 2587; words.chinese[27] = _T("v. 分開、使分離；\r\nps.  相反詞：attach (349) 附上、使附著；detachment (n) 分離、超然");
	words.word[28] = _T("remedy"); words.number[28] = 2589; words.chinese[28] = _T("n. 補救、改進措施、處理方法 = solution、治療法；v. 補救、改正、糾正");
	words.word[29] = _T("impending"); words.number[29] = 2592; words.chinese[29] = _T("adj. 即將到來的、逼近的");
	words.word[30] = _T("testimonial"); words.number[30] = 2595; words.chinese[30] = _T("n. 推薦(書)、證明(信)、感謝(狀)");
	words.word[31] = _T("debut"); words.number[31] = 2598; words.chinese[31] = _T("n. 初次登台、首次演出");

}
void getWords_Day27(Words &words)
{
	words.word[0] = _T("proliferate");	words.number[0] = 2601; words.chinese[0] = _T("v. (數量上)急遽上升/繁殖；\r\nps. proliferation (n.) 激增、湧現");
	words.word[1] = _T("symptom");		words.number[1] = 2604; words.chinese[1] = _T("n. 症狀、徵兆");
	words.word[2] = _T("obligation");	words.number[2] = 2607; words.chinese[2] = _T("n. 義務、責任；'\r\nps. obligate (v.) 使負義務、使負責任");
	words.word[3] = _T("skyscraper");	words.number[3] = 2608; words.chinese[3] = _T("n. 摩天大樓");
	words.word[4] = _T("attorney");		words.number[4] = 2614; words.chinese[4] = _T("n. 法定代理人、律師 = lawyer");
	words.word[5] = _T("inhabitant");	words.number[5] = 2618; words.chinese[5] = _T("n. 居民、居住者；\r\nps. habitat (n.)(2975) 棲息地、(動物)生活環境；inhabit (v.) 居住於 ");
	words.word[6] = _T("stability");	words.number[6] = 2621; words.chinese[6] = _T("adv. 穩定(性)、安定的狀態；\r\nps. 相反詞：instability 不安定性； stable 穩定的 <--> unstable 不穩定的");
	words.word[7] = _T("apparently");	words.number[7] = 2624; words.chinese[7] = _T("adv. 顯然地；\r\nps. apparent (adj.) 表面的、顯而易見的");
	words.word[8] = _T("rebate");		words.number[8] = 2627; words.chinese[8] = _T("n. 退還款、回扣、折扣");
	words.word[9] = _T("politely");		words.number[9] = 2630; words.chinese[9] = _T("adv. 有禮貌地；\r\nps. polite (adj) 有禮貌的；politeness (n.) 有禮貌、客氣");
	words.word[10] = _T("prevalent");	words.number[10] = 2633; words.chinese[10] = _T("adj. 普遍的、盛行的、流行的；\r\nps. prevalence (n) 普遍、盛行、流行");
	words.word[11] = _T("lucrative");	words.number[11] = 2636; words.chinese[11] = _T("adj. 賺錢的、獲利多的 = profitable (1674)");
	words.word[12] = _T("fierce");		words.number[12] = 2641; words.chinese[12] = _T("adj. 強烈的、激烈的、兇殘的、猛烈的");
	words.word[13] = _T("congress");	words.number[13] = 2644; words.chinese[13] = _T("n. (美國)國會、議會；\r\nps. congressional (adj) 國家立法機關的、議會的");
	words.word[14] = _T("trustee");		words.number[14] = 2647; words.chinese[14] = _T("n. 董事、理事、(信託財產的)受託管理人");
	words.word[15] = _T("superficial"); words.number[15] = 2650; words.chinese[15] = _T("adj. 表面的、膚淺的；\r\nps. superficially (adv.) 表面地、膚淺地");
	words.word[16] = _T("ascertain");	words.number[16] = 2653; words.chinese[16] = _T("v. 確定(事實、真實性)、查明");
	words.word[17] = _T("permanent");	words.number[17] = 2656; words.chinese[17] = _T("adj. 長久的、永久的、永遠的；\r\nps. permanently (adv.) 永久地、長期不變地；permanence (n) 永久(性) ");
	words.word[18] = _T("tremendous");	words.number[18] = 2660; words.chinese[18] = _T("adj. 驚人的、巨大的");
	words.word[19] = _T("definitely");	words.number[19] = 2663; words.chinese[19] = _T("adv. 無疑地、肯定地、當然；\r\nps. definite (adj) 明確的、確定的");
	words.word[20] = _T("gathering");	words.number[20] = 2666; words.chinese[20] = _T("n. 集會、聚會、收集");
	words.word[21] = _T("attire");		words.number[21] = 2667; words.chinese[21] = _T("n. 服裝、衣著 = clothes；v.使穿衣、打扮");
	words.word[22] = _T("split");		words.number[22] = 2672; words.chinese[22] = _T("v. 分開、分擔、分享 (利益、費用)、分裂；n. 裂縫、分裂");
	words.word[23] = _T("mandate");		words.number[23] = 2675; words.chinese[23] = _T("n. (選舉、投票等的)權力、授權、指令、命令；v. 授權；\r\nps. mandatory (adj)(1665) 義務的、法定的 ");
	words.word[24] = _T("superb");		words.number[24] = 2677; words.chinese[24] = _T("adj. 一流的、極佳的；\r\nps. superbly (adv.) 上等地、極好地");
	words.word[25] = _T("sustain");		words.number[25] = 2680; words.chinese[25] = _T("v. 遭受 (損害、傷害)；維持 = support、承擔；\r\nps. sustained (adj) 持久的、持續的");
	words.word[26] = _T("enlarge");		words.number[26] = 2683; words.chinese[26] = _T("v. 放大、擴展、增加(數量)；\r\nps. enlargement (n.) 擴大");
	words.word[27] = _T("excursion");	words.number[27] = 2686; words.chinese[27] = _T("n. 短途旅行、遠足");
	words.word[28] = _T("controversial");words.number[28] = 2690; words.chinese[28] = _T("adj. 爭議性的、引起爭議的；\r\nps. 相反詞：uncontroversial (adj.) 不會引起爭議的；controversy (n.) 爭議");
	words.word[29] = _T("sophisticated");words.number[29] = 2693; words.chinese[29] = _T("adj. (機械、裝置等)精密的、複雜的、老練的、見過世面的；\r\nps. Sophistication (n) 老練、有教養、有經驗");
	words.word[30] = _T("fabulous");	words.number[30] = 2695; words.chinese[30] = _T("adj. 絕妙的、極好的、巨大的");
	words.word[31] = _T("anonymous");	words.number[31] = 2700; words.chinese[31] = _T("adj. 匿名的；\r\nps. anonymously (adv.) 匿名地；annoyed (adj.) 煩惱的 (= little angry)");

}
void getWords_Day28(Words &words)
{
	words.word[0] = _T("execute");		words.number[0] = 2703;		words.chinese[0] = _T("v. 執行(任務、計畫)、實施；\r\nps. executive (adj.) 管理的、行政的 (n.) 經理、主管；\r\n    execution (n.) 執行、實施");
	words.word[1] = _T("boast");		words.number[1] = 2705;		words.chinese[1] = _T("v. 擁有(~自豪)、吹噓、誇耀；n. 吹噓、誇耀、引以為榮的事物");
	words.word[2] = _T("burst");		words.number[2] = 2707;		words.chinese[2] = _T("v. 爆裂、破裂；突然衝到~；n. 破裂、爆發");
	words.word[3] = _T("tentative");	words.number[3] = 2709;		words.chinese[3] = _T("adj. 暫時性的、猶豫不決的；\r\nps. tentatively (adv.) 暫時性地");
	words.word[4] = _T("boundary");		words.number[4] = 2713;		words.chinese[4] = _T("n. 分界(線)、邊界");
	words.word[5] = _T("acclaim");		words.number[5] = 2717;		words.chinese[5] = _T("v. 給予高度評價、喝采、歡迎、稱讚；n. 喝采、稱讚");
	words.word[6] = _T("consquence");	words.number[6] = 2721;		words.chinese[6] = _T("n. 結束、後果；\r\nps. consequently (adv.) 結果、因此、所以；consequent (adj.) \r\n    隨之發生的 = consequential");
	words.word[7] = _T("apparatus");	words.number[7] = 2722;		words.chinese[7] = _T("n. 儀器、裝置、器械 =  equipment");
	words.word[8] = _T("enact");		words.number[8] = 2726;		words.chinese[8] = _T("v. 制訂、通過 (法案等)；enactment (n.) (法律的)制訂、法律、法規");
	words.word[9] = _T("severely");		words.number[9] = 2729;		words.chinese[9] = _T("adv. 嚴重地、嚴格地；\r\nps. servere (adj.) 嚴重的、嚴厲的 = rigid");
	words.word[10] = _T("demanding");	words.number[10] = 2732;	words.chinese[10] = _T("adj. 費力的、要求高的的、挑剔的、嚴苛的");
	words.word[11] = _T("devise");		words.number[11] = 2736;	words.chinese[11] = _T("v. 設計、想出、發明；\r\nps. device (n.) 裝置、設備");
	words.word[12] = _T("attain");		words.number[12] = 2740;	words.chinese[12] = _T("v. 達成(目標、達到(位置、地位等)；\r\nps. attainable (adj) 可達成的；attainment (n.) 達成、成就");
	words.word[13] = _T("inherently");	words.number[13] = 2743;	words.chinese[13] = _T("adv. 本質上地、固有地；\r\nps. inherent (adj.) 本來的、本質的");
	words.word[14] = _T("captalize");	words.number[14] = 2747;	words.chinese[14] = _T("v. 從∼獲利 = take advantage of、使資本化、提供(資本)、用大小字母書寫；\r\nps. capital (n)(754) 資本、首都、大寫字母 ");
	words.word[15] = _T("neutrality");	words.number[15] = 2750;	words.chinese[15] = _T("n. 中立(性)；\r\nps. neutral (adj.) 中立的；neutally (adv.) 中立地、保持中立地");
	words.word[16] = _T("deliberate");	words.number[16] = 2752;	words.chinese[16] = _T("adj. 刻意的、慎重的、從容的；v. 深思熟慮的；\r\nps. deliberately (adv.) 慎重地、故意地");
	words.word[17] = _T("exaggerate");	words.number[17] = 2755;	words.chinese[17] = _T("v. 誇大、誇張、言過其實；\r\nps. exaggration (n.) 誇張、誇大");
	words.word[18] = _T("blend");		words.number[18] = 2756;	words.chinese[18] = _T("v. 混合、融合、調製；n. 混合；\r\nps. blender (n.) 攪拌機");
	words.word[19] = _T("expose");		words.number[19] = 2760;	words.chinese[19] = _T("v. 使暴露(在危險之中)、揭露(事實等) = reveal (878)；\r\nps. exposure (n.) 暴露、揭露、曝光");
	words.word[20] = _T("engrave");		words.number[20] = 2763;	words.chinese[20] = _T("v. 雕刻、將∼銘記");
	words.word[21] = _T("commodity");	words.number[21] = 2769;	words.chinese[21] = _T("n. 商品、有用的東西");
	words.word[22] = _T("halt");		words.number[22] = 2771;	words.chinese[22] = _T("n. 中斷、停止、暫停；v. 使中斷、停止");
	words.word[23] = _T("antibiotic");	words.number[23] = 2775;	words.chinese[23] = _T("n. 抗生素； adj. 抗生的、抗菌的");
	words.word[24] = _T("diminish");	words.number[24] = 2777;	words.chinese[24] = _T("v. 減少、縮減 = decrease");
	words.word[25] = _T("infrastructure");words.number[25] = 2781;	words.chinese[25] = _T("n. (國家等的)基礎建設、公用設備");
	words.word[26] = _T("bulk");		words.number[26] = 2784;	words.chinese[26] = _T("n. 大部分、主體、大量；adj. 大批的、大量的");
	words.word[27] = _T("bewildering");	words.number[27] = 2788;	words.chinese[27] = _T("adj. 令人困惑的；\r\nps. bewilder (v.) 使迷惑、使糊塗");
	words.word[28] = _T("constraint");	words.number[28] = 2790;	words.chinese[28] = _T("n. 限制、約束；\r\nps. constrain (v.) 強迫、限制 = restrict (1411)");
	words.word[29] = _T("susceptible");	words.number[29] = 2792;	words.chinese[29] = _T("adj. 易受感染/影響的、敏感的、易動感情的");
	words.word[30] = _T("outlook");		words.number[30] = 2795;	words.chinese[30] = _T("n. 前景、展望、見解、觀點");
	words.word[31] = _T("fabricate");	words.number[31] = 2800;	words.chinese[31] = _T("v. 組裝、製造 = manufacture (105)；\r\nps. fabrication (n.) 製造；prefabricated (adj.) (建築)預製構建的");
}
void getWords_Day29(Words &words)
{
	words.word[0] = _T("bounce"); 		words.number[0] = 2801; 	words.chinese[0] = _T("v. (球等)彈起、(支票、電子郵件等)退回； n. 彈跳、活力");
	words.word[1] = _T("thrive"); 		words.number[1] = 2805; 	words.chinese[1] = _T("v. 興旺、繁榮 (= flourish)；\r\nps. thriving 興旺的");
	words.word[2] = _T("abrupt");		words.number[2] = 2807; 	words.chinese[2] = _T("adj. 突然的、意外的、(態度、語言)魯莽的；\r\nps. abruptly 突然地 ");
	words.word[3] = _T("incredible");	words.number[3] = 2810; 	words.chinese[3] = _T("adj. 極佳的、不可置信的；\r\nps. incredibly 難以置信地");
	words.word[4] = _T("compel");		words.number[4] = 2814; 	words.chinese[4] = _T("v. 強迫、使不得不；\r\nps. compelling 令人信服的、引人入勝的");
	words.word[5] = _T("facilitate");	words.number[5] = 2817; 	words.chinese[5] = _T("v. 促進、使容易；\r\nps. facility 設備、設施；facilitation 簡易化、促進");
	words.word[6] = _T("undertake");	words.number[6] = 2820; 	words.chinese[6] = _T("v. 著手進行、負責、承擔(事情、責任)、允許、答應；\r\nps. undergo 經歷、undergraduate 大學生");
	words.word[7] = _T("bilingual");	words.number[7] = 2823; 	words.chinese[7] = _T("v. 堅稱、斷言；\r\nps. assertive (adj.) 斷言的、武斷的");
	words.word[8] = _T("assert"); 		words.number[8] = 2827; 	words.chinese[8] = _T("adj. 精疲力竭的、耗盡的、用完的；\r\nps. exhausting 使人精疲力竭的");
	words.word[9] = _T("exhausted"); 	words.number[9] = 2829; 	words.chinese[9] = _T("v. 領會、理解、抓牢；n. 理解、緊抓");
	words.word[10] = _T("grasp"); 		words.number[10] = 2831; 	words.chinese[10] = _T("v. 興旺、繁榮、(植物)茂密");
	words.word[11] = _T("aptitude"); 	words.number[11] = 2837; 	words.chinese[11] = _T("n. 天資、才能、適宜、自然傾向");
	words.word[12] = _T("escalate");	words.number[12] = 2840; 	words.chinese[12] = _T("v. (程度)加劇、惡化、(薪資、物價等)逐漸上升");
	words.word[13] = _T("laundry"); 	words.number[13] = 2843; 	words.chinese[13] = _T("n. 送洗衣物、洗衣店");
	words.word[14] = _T("integrate"); 	words.number[14] = 2846; 	words.chinese[14] = _T("v. 整合、使完整；\r\nps. integration (n.) 整合、融合；integrated (adj.) 整合的");
	words.word[15] = _T("censorship");	words.number[15] = 2850; 	words.chinese[15] = _T("n. 審查(制度)；\r\nps. censor (n.) (出版物、電影等的)審查員");
	words.word[16] = _T("apprehensive");words.number[16] = 2852; 	words.chinese[16] = _T("adj. 擔憂的、憂慮的、領悟的");
	words.word[17] = _T("heritage"); 	words.number[17] = 2855; 	words.chinese[17] = _T("n. (文化歷史的)遺產、傳承");
	words.word[18] = _T("cusine");		words.number[18] = 2859; 	words.chinese[18] = _T("n. 烹飪、烹飪法、菜餚");
	words.word[19] = _T("contingent"); 	words.number[19] = 2863; 	words.chinese[19] = _T("adj. 因情況而定的；以~為條件的");
	words.word[20] = _T("densely"); 	words.number[20] = 2865; 	words.chinese[20] = _T("adj. 密集地、稠密地；\r\nps. dense (adj.)稠密的、密集的、density (n)密度、濃度");
	words.word[21] = _T("creditable");	words.number[21] = 2868; 	words.chinese[21] = _T("adj. 值得稱讚的、可信的；\r\nps. credit (n.)信用、名譽、存款金額、賒欠");
	words.word[22] = _T("affix"); 		words.number[22] = 2872; 	words.chinese[22] = _T("v. 黏貼上(郵票等)、附上、蓋(印章)；n. 附加物");
	words.word[23] = _T("fundraiser"); 	words.number[23] = 2875; 	words.chinese[23] = _T("n. 募款活動、募款者；\r\nps. fundraising (n.) 籌款、募款 (adj) 募款的");
	words.word[24] = _T("simulate"); 	words.number[24] = 2878; 	words.chinese[24] = _T("v. 模擬、冒充、假裝；\r\nps. simulation (n.) 模擬、冒充");
	words.word[25] = _T("elict");		words.number[25] = 2881; 	words.chinese[25] = _T("v. 引出、誘出、探知");
	words.word[26] = _T("interact"); 	words.number[26] = 2883; 	words.chinese[26] = _T("v. 互動、戶相作用、互相影響；\r\nps. interaction (n.) 互動、互相作用；interactive (adj.) 相互作用的");
	words.word[27] = _T("comprise");	words.number[27] = 2885; 	words.chinese[27] = _T("v. 由~組成、包含 (consist of)");
	words.word[28] = _T("massive");		words.number[28] = 2889; 	words.chinese[28] = _T("adj. 龐大的、大規模的、結實的；\r\nps. mass (n.) 大量、眾多 (adj.) 大批的、大量的 (v)聚集；\r\n     massively (adv.) 大量地");
	words.word[29] = _T("irrigation");	words.number[29] = 2891; 	words.chinese[29] = _T("n. 灌溉");
	words.word[30] = _T("deficit");		words.number[30] = 2895; 	words.chinese[30] = _T("n. 赤字的、不足的");
	words.word[31] = _T("impede");		words.number[31] = 2898; 	words.chinese[31] = _T("v. 妨礙、阻礙");
}
void getWords_Day30(Words &words)
{
	words.word[0] = _T("disclose"); 	words.number[0] = 2901; 	words.chinese[0] = _T("v. 透漏、揭發、公開 = reveal (878) = expose (2760)；\r\nps. disclosure (n.) 揭發、透露、公開");
	words.word[1] = _T("inevitable"); 	words.number[1] = 2903; 	words.chinese[1] = _T("adj. 必然的、無可避免的");
	words.word[2] = _T("deplete");		words.number[2] = 2906; 	words.chinese[2] = _T("v. n. 使減少、枯竭、耗盡");
	words.word[3] = _T("magnificent"); 	words.number[3] = 2909; 	words.chinese[3] = _T("adj. 宏偉的、壯麗的、極好的");
	words.word[4] = _T("discrepancy"); 	words.number[4] = 2914; 	words.chinese[4] = _T("n. 差異、不一致");
	words.word[5] = _T("collapse"); 	words.number[5] = 2916; 	words.chinese[5] = _T("v. n. 倒塌、崩潰、(價格)暴跌");
	words.word[6] = _T("revolutionary"); words.number[6] = 2919; 	words.chinese[6] = _T("adj. 創新的、革命的；n. 革命者；\r\nps. revolution (n.) 革新、變革");
	words.word[7] = _T("byproduct"); 	words.number[7] = 2924; 	words.chinese[7] = _T("n. 副產品、附帶結果");
	words.word[8] = _T("sluggish"); 	words.number[8] = 2927; 	words.chinese[8] = _T("adj. 遲緩的、停滯的、懶惰的");
	words.word[9] = _T("defy"); 		words.number[9] = 2930; 	words.chinese[9] = _T("v. 難以(形容)、無法(相信)、拒抗；\r\nps. defiant (adj.) 違抗的、挑釁的；defuance (n.) 違抗、抵抗");
	words.word[10] = _T("flourish"); 	words.number[10] = 2933; 	words.chinese[10] = _T("v. 興旺、繁榮、(植物)茂密");
	words.word[11] = _T("manipulate"); 	words.number[11] = 2936; 	words.chinese[11] = _T("v.操作、操縱；\r\nps. manipulation (n.) 操作、操縱");
	words.word[12] = _T("layoff");		words.number[12] = 2940; 	words.chinese[12] = _T("n. 資遣、臨時解雇");
	words.word[13] = _T("bilateral"); 	words.number[13] = 2943; 	words.chinese[13] = _T("adj. 雙方的、雙邊的");
	words.word[14] = _T("incidental"); 	words.number[14] = 2946; 	words.chinese[14] = _T("adj. 附帶的、次要的、伴隨而來的");
	words.word[15] = _T("intervention"); words.number[15] = 2949; 	words.chinese[15] = _T("n. 介入、干涉、調停；\r\nps. intervene (v.) 介入、干涉、調停");
	words.word[16] = _T("endorse"); 	words.number[16] = 2953; 	words.chinese[16] = _T("v. 贊同(意見)、背書；\r\nps. endorsement (n.) 支持、背書");
	words.word[17] = _T("dilute"); 		words.number[17] = 2955; 	words.chinese[17] = _T("v. 稀釋、削弱；adj. 經稀釋的、減弱的了；\r\nps. dilution (n.) 稀釋");
	words.word[18] = _T("confine"); 	words.number[18] = 2958; 	words.chinese[18] = _T("v. 限制、使侷限");
	words.word[19] = _T("trivial"); 	words.number[19] = 2962; 	words.chinese[19] = _T("adj. 細瑣的、微不足道的");
	words.word[20] = _T("elaborate"); 	words.number[20] = 2964; 	words.chinese[20] = _T("adj. 精巧的、精心製作的；v.精巧製作、詳細說明；\r\nps. elaboration (n.) 複雜、精巧");
	words.word[21] = _T("discriminate"); words.number[21] = 2968; 	words.chinese[21] = _T("v. 歧視、區分(差異)、辨別；\r\nps. discrimination (n.) 差別、不公平待遇、歧視");
	words.word[22] = _T("vulnerable"); 	words.number[22] = 2972; 	words.chinese[22] = _T("adj. 易受傷的、脆弱的");
	words.word[23] = _T("habitat"); 	words.number[23] = 2975; 	words.chinese[23] = _T("n. (動物)棲息地、(植物)生長地");
	words.word[24] = _T("radical"); 	words.number[24] = 2977; 	words.chinese[24] = _T("adj. 徹底的、根本的、激進的；\r\nps. radically (adv.) 根本地、激進地、徹底地");
	words.word[25] = _T("spontaneous"); words.number[25] = 2979; 	words.chinese[25] = _T("adj. 自然的、自發；\r\nps. spantaneously (adv.) 自然地、不由自主地");
	words.word[26] = _T("rigid"); 		words.number[26] = 2982; 	words.chinese[26] = _T("adj. 嚴格的、堅硬的、僵化的；\r\nps. 相反詞: flexible (1654)；rigidly (adv.) 僵硬地、嚴格地");
	words.word[27] = _T("voucher"); 	words.number[27] = 2985; 	words.chinese[27] = _T("n. 商品券、抵用券、憑單");
	words.word[28] = _T("bias"); 		words.number[28] = 2989; 	words.chinese[28] = _T("n. 成見、偏見；v. 使存偏見");
	words.word[29] = _T("fraud"); 		words.number[29] = 2992; 	words.chinese[29] = _T("n. 詐騙、詐騙(行為)、騙局、騙子");
	words.word[30] = _T("fundamental"); words.number[30] = 2996; 	words.chinese[30] = _T("adj. 基本的；根本的；十分重要的；n. 基本原理；\r\nps. fundamentally (adv.) 基礎地、重要地");
	words.word[31] = _T("arouse"); 		words.number[31] = 3000; 	words.chinese[31] = _T("v. 激起、喚起、使奮發");
}

