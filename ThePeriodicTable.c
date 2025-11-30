#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void GenerateThePeriodicTable(void);
void TheElements(int _Select);

int main(void) {
	bool IsProgramRunning = true;

	char UserInput[8];
	int Selection = 0;
    char Exit[5] = "exit\0";

	GenerateThePeriodicTable();

	printf("\n\nPlease select an element by its number\n");
    printf("Enter the following to exit: \"exit\"\n");
	while(IsProgramRunning == true) {
		printf("User: ");
		fgets(UserInput, sizeof(UserInput), stdin);
		UserInput[strcspn(UserInput, "\n")] = '\0';
		Selection = atoi(UserInput);

        if(strcmp(UserInput, Exit) == 0) {
            printf("\nGoodbye user\n\n");
            IsProgramRunning = false;
        }

        else {
		    TheElements(Selection);
        }

		fflush(stdin);
	}

	return 0;
}

void GenerateThePeriodicTable(void) {
    printf("\n1\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t2");
    printf("\nH\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHe\n");

    printf("\n3\t4\t\t\t\t\t\t\t\t\t\t\t\t5\t6\t7\t8\t9\t10");
    printf("\nLi\tBe\t\t\t\t\t\t\t\t\t\t\t\tB\tC\tN\tO\tF\tNe\n");

    printf("\n11\t12\t\t\t\t\t\t\t\t\t\t\t\t13\t14\t15\t16\t17\t18");
    printf("\nNa\tMg\t\t\t\t\t\t\t\t\t\t\t\tAl\tSi\tP\tS\tCl\tAr\n");

    printf("\n19\t20\t\t21\t22\t23\t24\t25\t26\t27\t28\t29\t30\t31\t32\t33\t34\t35\t36");
    printf("\nK\tCa\t\tSc\tTi\tV\tCr\tMn\tFe\tCo\tNi\tCu\tZn\tGa\tGe\tAs\tSe\tBr\tKr\n");

    printf("\n37\t38\t\t39\t40\t41\t42\t43\t44\t45\t46\t47\t48\t49\t50\t51\t52\t53\t54");
    printf("\nRb\tSr\t\tY\tZr\tNb\tMo\tTc\tRu\tRh\tPd\tAg\tCd\tIn\tSn\tSb\tTe\tI\tXe\n");

    printf("\n55\t56\t57-70\t71\t72\t73\t74\t75\t76\t77\t78\t79\t80\t81\t82\t83\t84\t85\t86");
    printf("\nCs\tBa\t*\tLu\tHf\tTa\tW\tRe\tOs\tIr\tPt\tAu\tHg\tTl\tPb\tBi\tPo\tAt\tRn\n");

    printf("\n87\t88\t89-102\t103\t104\t105\t106\t107\t108\t109\t110\t111\t112\t113\t114\t115\t116\t117\t118");
    printf("\nFr\tRa\t**\tLr\tRf\tDb\tSg\tBh\tHs\tMt\tDs\tRg\tCn\tNh\tFl\tMc\tLv\tTs\tOg\n");

    printf("\n\t\t*\t57\t58\t59\t60\t61\t62\t63\t64\t65\t66\t67\t68\t69\t70");
    printf("\n\t\t\tLa\tCe\tPr\tNd\tPm\tSm\tEu\tGd\tTb\tDy\tHo\tEr\tTm\tYb\n");

    printf("\n\t\t**\t89\t90\t91\t92\t93\t94\t95\t96\t97\t98\t99\t100\t101\t102");
    printf("\n\t\t\tAc\tTh\tPa\tU\tNp\tPu\tAm\tCm\tBk\tCf\tEs\tFm\tMd\tNo");

    return;
}

void TheElements(int _Select) {
	printf("\n");
    switch(_Select) {
        case 1:
            printf("Name:\tHydrogen\n");
            printf("Symbol:\tH\n");
            printf("Atomic Number:\t1\n");
            printf("Atomic Mass:\t1.008 g/mol\n");
            printf("Group:\t1 (Alkali Metal)\n");
            printf("Period:\t1\n");
            printf("Electron Configuration:\t1s¹\n");
            break;
        case 2:
            printf("Name:\tHelium\n");
            printf("Symbol:\tHe\n");
            printf("Atomic Number:\t2\n");
            printf("Atomic Mass:\t4.003 g/mol\n");
            printf("Group:\t18 (Noble Gas)\n");
            printf("Period:\t1\n");
            printf("Electron Configuration:\t1s²\n");
            break;

        case 3:
            printf("Name:\tLithium\n");
            printf("Symbol:\tLi\n");
            printf("Atomic Number:\t3\n");
            printf("Atomic Mass:\t6.941 g/mol\n");
            printf("Group:\t1 (Alkali Metal)\n");
            printf("Period:\t2\n");
            printf("Electron Configuration:\t[He] 2s¹\n");
            break;

        case 4:
            printf("Name:\tBeryllium\n");
            printf("Symbol:\tBe\n");
            printf("Atomic Number:\t4\n");
            printf("Atomic Mass:\t9.012 g/mol\n");
            printf("Group:\t2 (Alkaline Earth Metal)\n");
            printf("Period:\t2\n");
            printf("Electron Configuration:\t[He] 2s²\n");
            break;

        case 5:
            printf("Name:\tBoron\n");
            printf("Symbol:\tB\n");
            printf("Atomic Number:\t5\n");
            printf("Atomic Mass:\t10.81 g/mol\n");
            printf("Group:\t13 (Metalloid)\n");
            printf("Period:\t2\n");
            printf("Electron Configuration:\t[He] 2s² 2p¹\n");
            break;

        case 6:
            printf("Name:\tCarbon\n");
            printf("Symbol:\tC\n");
            printf("Atomic Number:\t6\n");
            printf("Atomic Mass:\t12.01 g/mol\n");
            printf("Group:\t14 (Nonmetal)\n");
            printf("Period:\t2\n");
            printf("Electron Configuration:\t[He] 2s² 2p²\n");
            break;

        case 7:
            printf("Name:\tNitrogen\n");
            printf("Symbol:\tN\n");
            printf("Atomic Number:\t7\n");
            printf("Atomic Mass:\t14.01 g/mol\n");
            printf("Group:\t15 (Nonmetal)\n");
            printf("Period:\t2\n");
            printf("Electron Configuration:\t[He] 2s² 2p³\n");
            break;

        case 8:
            printf("Name:\tOxygen\n");
            printf("Symbol:\tO\n");
            printf("Atomic Number:\t8\n");
            printf("Atomic Mass:\t16.00 g/mol\n");
            printf("Group:\t16 (Nonmetal)\n");
            printf("Period:\t2\n");
            printf("Electron Configuration:\t[He] 2s² 2p⁴\n");
            break;

        case 9:
            printf("Name:\tFluorine\n");
            printf("Symbol:\tF\n");
            printf("Atomic Number:\t9\n");
            printf("Atomic Mass:\t19.00 g/mol\n");
            printf("Group:\t17 (Halogen)\n");
            printf("Period:\t2\n");
            printf("Electron Configuration:\t[He] 2s² 2p⁵\n");
            break;

        case 10:
            printf("Name:\tNeon\n");
            printf("Symbol:\tNe\n");
            printf("Atomic Number:\t10\n");
            printf("Atomic Mass:\t20.18 g/mol\n");
            printf("Group:\t18 (Noble Gas)\n");
            printf("Period:\t2\n");
            printf("Electron Configuration:\t[He] 2s² 2p⁶\n");
            break;

        case 11:
            printf("Name:\tSodium\n");
            printf("Symbol:\tNa\n");
            printf("Atomic Number:\t11\n");
            printf("Atomic Mass:\t22.99 g/mol\n");
            printf("Group:\t1 (Alkali Metal)\n");
            printf("Period:\t3\n");
            printf("Electron Configuration:\t[Ne] 3s¹\n");
            break;

        case 12:
            printf("Name:\tMagnesium\n");
            printf("Symbol:\tMg\n");
            printf("Atomic Number:\t12\n");
            printf("Atomic Mass:\t24.31 g/mol\n");
            printf("Group:\t2 (Alkaline Earth Metal)\n");
            printf("Period:\t3\n");
            printf("Electron Configuration:\t[Ne] 3s²\n");
            break;

        case 13:
            printf("Name:\tAluminum\n");
            printf("Symbol:\tAl\n");
            printf("Atomic Number:\t13\n");
            printf("Atomic Mass:\t26.98 g/mol\n");
            printf("Group:\t13 (Post-transition Metal)\n");
            printf("Period:\t3\n");
            printf("Electron Configuration:\t[Ne] 3s² 3p¹\n");
            break;

        case 14:
            printf("Name:\tSilicon\n");
            printf("Symbol:\tSi\n");
            printf("Atomic Number:\t14\n");
            printf("Atomic Mass:\t28.09 g/mol\n");
            printf("Group:\t14 (Metalloid)\n");
            printf("Period:\t3\n");
            printf("Electron Configuration:\t[Ne] 3s² 3p²\n");
            break;

        case 15:
            printf("Name:\tPhosphorus\n");
            printf("Symbol:\tP\n");
            printf("Atomic Number:\t15\n");
            printf("Atomic Mass:\t30.97 g/mol\n");
            printf("Group:\t15 (Nonmetal)\n");
            printf("Period:\t3\n");
            printf("Electron Configuration:\t[Ne] 3s² 3p³\n");
            break;

        case 16:
            printf("Name:\tSulfur\n");
            printf("Symbol:\tS\n");
            printf("Atomic Number:\t16\n");
            printf("Atomic Mass:\t32.07 g/mol\n");
            printf("Group:\t16 (Nonmetal)\n");
            printf("Period:\t3\n");
            printf("Electron Configuration:\t[Ne] 3s² 3p⁴\n");
            break;

        case 17:
            printf("Name:\tChlorine\n");
            printf("Symbol:\tCl\n");
            printf("Atomic Number:\t17\n");
            printf("Atomic Mass:\t35.45 g/mol\n");
            printf("Group:\t17 (Halogen)\n");
            printf("Period:\t3\n");
            printf("Electron Configuration:\t[Ne] 3s² 3p⁵\n");
            break;

        case 18:
            printf("Name:\tArgon\n");
            printf("Symbol:\tAr\n");
            printf("Atomic Number:\t18\n");
            printf("Atomic Mass:\t39.95 g/mol\n");
            printf("Group:\t18 (Noble Gas)\n");
            printf("Period:\t3\n");
            printf("Electron Configuration:\t[Ne] 3s² 3p⁶\n");
            break;

        case 19:
            printf("Name:\tPotassium\n");
            printf("Symbol:\tK\n");
            printf("Atomic Number:\t19\n");
            printf("Atomic Mass:\t39.10 g/mol\n");
            printf("Group:\t1 (Alkali Metal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 4s¹\n");
            break;

        case 20:
            printf("Name:\tCalcium\n");
            printf("Symbol:\tCa\n");
            printf("Atomic Number:\t20\n");
            printf("Atomic Mass:\t40.08 g/mol\n");
            printf("Group:\t2 (Alkaline Earth Metal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 4s²\n");
            break;

        case 21:
            printf("Name:\tScandium\n");
            printf("Symbol:\tSc\n");
            printf("Atomic Number:\t21\n");
            printf("Atomic Mass:\t44.96 g/mol\n");
            printf("Group:\t3 (Transition Metal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d¹ 4s²\n");
            break;

        case 22:
            printf("Name:\tTitanium\n");
            printf("Symbol:\tTi\n");
            printf("Atomic Number:\t22\n");
            printf("Atomic Mass:\t47.87 g/mol\n");
            printf("Group:\t4 (Transition Metal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d² 4s²\n");
            break;

        case 23:
            printf("Name:\tVanadium\n");
            printf("Symbol:\tV\n");
            printf("Atomic Number:\t23\n");
            printf("Atomic Mass:\t50.94 g/mol\n");
            printf("Group:\t5 (Transition Metal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d³ 4s²\n");
            break;

        case 24:
            printf("Name:\tChromium\n");
            printf("Symbol:\tCr\n");
            printf("Atomic Number:\t24\n");
            printf("Atomic Mass:\t52.00 g/mol\n");
            printf("Group:\t6 (Transition Metal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d⁵ 4s¹\n");
            break;

        case 25:
            printf("Name:\tManganese\n");
            printf("Symbol:\tMn\n");
            printf("Atomic Number:\t25\n");
            printf("Atomic Mass:\t54.94 g/mol\n");
            printf("Group:\t7 (Transition Metal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d⁵ 4s²\n");
            break;

        case 26:
            printf("Name:\tIron\n");
            printf("Symbol:\tFe\n");
            printf("Atomic Number:\t26\n");
            printf("Atomic Mass:\t55.85 g/mol\n");
            printf("Group:\t8 (Transition Metal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d⁶ 4s²\n");
            break;

        case 27:
            printf("Name:\tCobalt\n");
            printf("Symbol:\tCo\n");
            printf("Atomic Number:\t27\n");
            printf("Atomic Mass:\t58.93 g/mol\n");
            printf("Group:\t9 (Transition Metal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d⁷ 4s²\n");
            break;

        case 28:
            printf("Name:\tNickel\n");
            printf("Symbol:\tNi\n");
            printf("Atomic Number:\t28\n");
            printf("Atomic Mass:\t58.69 g/mol\n");
            printf("Group:\t10 (Transition Metal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d⁸ 4s²\n");
            break;

        case 29:
            printf("Name:\tCopper\n");
            printf("Symbol:\tCu\n");
            printf("Atomic Number:\t29\n");
            printf("Atomic Mass:\t63.55 g/mol\n");
            printf("Group:\t11 (Transition Metal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d¹⁰ 4s¹\n");
            break;

        case 30:
            printf("Name:\tZinc\n");
            printf("Symbol:\tZn\n");
            printf("Atomic Number:\t30\n");
            printf("Atomic Mass:\t65.38 g/mol\n");
            printf("Group:\t12 (Transition Metal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d¹⁰ 4s²\n");
            break;

        case 31:
            printf("Name:\tGallium\n");
            printf("Symbol:\tGa\n");
            printf("Atomic Number:\t31\n");
            printf("Atomic Mass:\t69.72 g/mol\n");
            printf("Group:\t13 (Post-transition Metal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d¹⁰ 4s² 4p¹\n");
            break;

        case 32:
            printf("Name:\tGermanium\n");
            printf("Symbol:\tGe\n");
            printf("Atomic Number:\t32\n");
            printf("Atomic Mass:\t72.63 g/mol\n");
            printf("Group:\t14 (Metalloid)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d¹⁰ 4s² 4p²\n");
            break;

        case 33:
            printf("Name:\tArsenic\n");
            printf("Symbol:\tAs\n");
            printf("Atomic Number:\t33\n");
            printf("Atomic Mass:\t74.92 g/mol\n");
            printf("Group:\t15 (Metalloid)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d¹⁰ 4s² 4p³\n");
            break;

        case 34:
            printf("Name:\tSelenium\n");
            printf("Symbol:\tSe\n");
            printf("Atomic Number:\t34\n");
            printf("Atomic Mass:\t78.97 g/mol\n");
            printf("Group:\t16 (Nonmetal)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d¹⁰ 4s² 4p⁴\n");
            break;

        case 35:
            printf("Name:\tBromine\n");
            printf("Symbol:\tBr\n");
            printf("Atomic Number:\t35\n");
            printf("Atomic Mass:\t79.90 g/mol\n");
            printf("Group:\t17 (Halogen)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d¹⁰ 4s² 4p⁵\n");
            break;

        case 36:
            printf("Name:\tKrypton\n");
            printf("Symbol:\tKr\n");
            printf("Atomic Number:\t36\n");
            printf("Atomic Mass:\t83.80 g/mol\n");
            printf("Group:\t18 (Noble Gas)\n");
            printf("Period:\t4\n");
            printf("Electron Configuration:\t[Ar] 3d¹⁰ 4s² 4p⁶\n");
            break;

        case 37:
            printf("Name:\tRubidium\n");
            printf("Symbol:\tRb\n");
            printf("Atomic Number:\t37\n");
            printf("Atomic Mass:\t85.47 g/mol\n");
            printf("Group:\t1 (Alkali Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 5s¹\n");
            break;

        case 38:
            printf("Name:\tStrontium\n");
            printf("Symbol:\tSr\n");
            printf("Atomic Number:\t38\n");
            printf("Atomic Mass:\t87.62 g/mol\n");
            printf("Group:\t2 (Alkaline Earth Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 5s²\n");
            break;

        case 39:
            printf("Name:\tYttrium\n");
            printf("Symbol:\tY\n");
            printf("Atomic Number:\t39\n");
            printf("Atomic Mass:\t88.91 g/mol\n");
            printf("Group:\t3 (Transition Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d¹ 5s²\n");
            break;

        case 40:
            printf("Name:\tZirconium\n");
            printf("Symbol:\tZr\n");
            printf("Atomic Number:\t40\n");
            printf("Atomic Mass:\t91.22 g/mol\n");
            printf("Group:\t4 (Transition Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d² 5s²\n");
            break;

        case 41:
            printf("Name:\tNiobium\n");
            printf("Symbol:\tNb\n");
            printf("Atomic Number:\t41\n");
            printf("Atomic Mass:\t92.91 g/mol\n");
            printf("Group:\t5 (Transition Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d⁴ 5s¹\n");
            break;

        case 42:
            printf("Name:\tMolybdenum\n");
            printf("Symbol:\tMo\n");
            printf("Atomic Number:\t42\n");
            printf("Atomic Mass:\t95.95 g/mol\n");
            printf("Group:\t6 (Transition Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d⁵ 5s¹\n");
            break;

        case 43:
            printf("Name:\tTechnetium\n");
            printf("Symbol:\tTc\n");
            printf("Atomic Number:\t43\n");
            printf("Atomic Mass:\t98.00 g/mol\n");
            printf("Group:\t7 (Transition Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d⁶ 5s¹\n");
            break;

        case 44:
            printf("Name:\tRuthenium\n");
            printf("Symbol:\tRu\n");
            printf("Atomic Number:\t44\n");
            printf("Atomic Mass:\t101.07 g/mol\n");
            printf("Group:\t8 (Transition Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d⁷ 5s¹\n");
            break;

        case 45:
            printf("Name:\tRhodium\n");
            printf("Symbol:\tRh\n");
            printf("Atomic Number:\t45\n");
            printf("Atomic Mass:\t102.91 g/mol\n");
            printf("Group:\t9 (Transition Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d⁸ 5s¹\n");
            break;

        case 46:
            printf("Name:\tPalladium\n");
            printf("Symbol:\tPd\n");
            printf("Atomic Number:\t46\n");
            printf("Atomic Mass:\t106.42 g/mol\n");
            printf("Group:\t10 (Transition Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d¹⁰\n");
            break;

        case 47:
            printf("Name:\tSilver\n");
            printf("Symbol:\tAg\n");
            printf("Atomic Number:\t47\n");
            printf("Atomic Mass:\t107.87 g/mol\n");
            printf("Group:\t11 (Transition Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d¹⁰ 5s¹\n");
            break;

        case 48:
            printf("Name:\tCadmium\n");
            printf("Symbol:\tCd\n");
            printf("Atomic Number:\t48\n");
            printf("Atomic Mass:\t112.41 g/mol\n");
            printf("Group:\t12 (Transition Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d¹⁰ 5s²\n");
            break;

        case 49:
            printf("Name:\tIndium\n");
            printf("Symbol:\tIn\n");
            printf("Atomic Number:\t49\n");
            printf("Atomic Mass:\t114.82 g/mol\n");
            printf("Group:\t13 (Post-transition Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d¹⁰ 5s² 5p¹\n");
            break;

        case 50:
            printf("Name:\tTin\n");
            printf("Symbol:\tSn\n");
            printf("Atomic Number:\t50\n");
            printf("Atomic Mass:\t118.71 g/mol\n");
            printf("Group:\t14 (Post-transition Metal)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d¹⁰ 5s² 5p²\n");
            break;

        case 51:
            printf("Name:\tAntimony\n");
            printf("Symbol:\tSb\n");
            printf("Atomic Number:\t51\n");
            printf("Atomic Mass:\t121.76 g/mol\n");
            printf("Group:\t15 (Metalloid)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d¹⁰ 5s² 5p³\n");
            break;

        case 52:
            printf("Name:\tTellurium\n");
            printf("Symbol:\tTe\n");
            printf("Atomic Number:\t52\n");
            printf("Atomic Mass:\t127.60 g/mol\n");
            printf("Group:\t16 (Metalloid)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d¹⁰ 5s² 5p⁴\n");
            break;

        case 53:
            printf("Name:\tIodine\n");
            printf("Symbol:\tI\n");
            printf("Atomic Number:\t53\n");
            printf("Atomic Mass:\t126.90 g/mol\n");
            printf("Group:\t17 (Halogen)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d¹⁰ 5s² 5p⁵\n");
            break;

        case 54:
            printf("Name:\tXenon\n");
            printf("Symbol:\tXe\n");
            printf("Atomic Number:\t54\n");
            printf("Atomic Mass:\t131.29 g/mol\n");
            printf("Group:\t18 (Noble Gas)\n");
            printf("Period:\t5\n");
            printf("Electron Configuration:\t[Kr] 4d¹⁰ 5s² 5p⁶\n");
            break;

        case 55:
            printf("Name:\tCesium\n");
            printf("Symbol:\tCs\n");
            printf("Atomic Number:\t55\n");
            printf("Atomic Mass:\t132.91 g/mol\n");
            printf("Group:\t1 (Alkali Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 6s¹\n");
            break;

        case 56:
            printf("Name:\tBarium\n");
            printf("Symbol:\tBa\n");
            printf("Atomic Number:\t56\n");
            printf("Atomic Mass:\t137.33 g/mol\n");
            printf("Group:\t2 (Alkaline Earth Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 6s²\n");
            break;

        case 57:
            printf("Name:\tLanthanum\n");
            printf("Symbol:\tLa\n");
            printf("Atomic Number:\t57\n");
            printf("Atomic Mass:\t138.91 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 5d¹ 6s²\n");
            break;

        case 58:
            printf("Name:\tCerium\n");
            printf("Symbol:\tCe\n");
            printf("Atomic Number:\t58\n");
            printf("Atomic Mass:\t140.12 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹ 5d¹ 6s²\n");
            break;

        case 59:
            printf("Name:\tPraseodymium\n");
            printf("Symbol:\tPr\n");
            printf("Atomic Number:\t59\n");
            printf("Atomic Mass:\t140.91 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f³ 6s²\n");
            break;

        case 60:
            printf("Name:\tNeodymium\n");
            printf("Symbol:\tNd\n");
            printf("Atomic Number:\t60\n");
            printf("Atomic Mass:\t144.24 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f⁴ 6s²\n");
            break;

        case 61:
            printf("Name:\tPromethium\n");
            printf("Symbol:\tPm\n");
            printf("Atomic Number:\t61\n");
            printf("Atomic Mass:\t145.00 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f⁵ 6s²\n");
            break;

        case 62:
            printf("Name:\tSamarium\n");
            printf("Symbol:\tSm\n");
            printf("Atomic Number:\t62\n");
            printf("Atomic Mass:\t150.36 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f⁶ 6s²\n");
            break;

        case 63:
            printf("Name:\tEuropium\n");
            printf("Symbol:\tEu\n");
            printf("Atomic Number:\t63\n");
            printf("Atomic Mass:\t151.96 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f⁷ 6s²\n");
            break;

        case 64:
            printf("Name:\tGadolinium\n");
            printf("Symbol:\tGd\n");
            printf("Atomic Number:\t64\n");
            printf("Atomic Mass:\t157.25 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f⁷ 5d¹ 6s²\n");
            break;

        case 65:
            printf("Name:\tTerbium\n");
            printf("Symbol:\tTb\n");
            printf("Atomic Number:\t65\n");
            printf("Atomic Mass:\t158.93 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f⁹ 6s²\n");
            break;

        case 66:
            printf("Name:\tDysprosium\n");
            printf("Symbol:\tDy\n");
            printf("Atomic Number:\t66\n");
            printf("Atomic Mass:\t162.50 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁰ 6s²\n");
            break;

        case 67:
            printf("Name:\tHolmium\n");
            printf("Symbol:\tHo\n");
            printf("Atomic Number:\t67\n");
            printf("Atomic Mass:\t164.93 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹¹ 6s²\n");
            break;

        case 68:
            printf("Name:\tErbium\n");
            printf("Symbol:\tEr\n");
            printf("Atomic Number:\t68\n");
            printf("Atomic Mass:\t167.26 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹² 6s²\n");
            break;

        case 69:
            printf("Name:\tThulium\n");
            printf("Symbol:\tTm\n");
            printf("Atomic Number:\t69\n");
            printf("Atomic Mass:\t168.93 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹³ 6s²\n");
            break;

        case 70:
            printf("Name:\tYtterbium\n");
            printf("Symbol:\tYb\n");
            printf("Atomic Number:\t70\n");
            printf("Atomic Mass:\t173.05 g/mol\n");
            printf("Group:\t3 (Lanthanide)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 6s²\n");
            break;

        case 71:
            printf("Name:\tLutetium\n");
            printf("Symbol:\tLu\n");
            printf("Atomic Number:\t71\n");
            printf("Atomic Mass:\t174.97 g/mol\n");
            printf("Group:\t3 (Transition Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d¹ 6s²\n");
            break;

        case 72:
            printf("Name:\tHafnium\n");
            printf("Symbol:\tHf\n");
            printf("Atomic Number:\t72\n");
            printf("Atomic Mass:\t178.49 g/mol\n");
            printf("Group:\t4 (Transition Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d² 6s²\n");
            break;

        case 73:
            printf("Name:\tTantalum\n");
            printf("Symbol:\tTa\n");
            printf("Atomic Number:\t73\n");
            printf("Atomic Mass:\t180.95 g/mol\n");
            printf("Group:\t5 (Transition Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d³ 6s²\n");
            break;

        case 74:
            printf("Name:\tTungsten\n");
            printf("Symbol:\tW\n");
            printf("Atomic Number:\t74\n");
            printf("Atomic Mass:\t183.84 g/mol\n");
            printf("Group:\t6 (Transition Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d⁴ 6s²\n");
            break;

        case 75:
            printf("Name:\tRhenium\n");
            printf("Symbol:\tRe\n");
            printf("Atomic Number:\t75\n");
            printf("Atomic Mass:\t186.21 g/mol\n");
            printf("Group:\t7 (Transition Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d⁵ 6s²\n");
            break;

        case 76:
            printf("Name:\tOsmium\n");
            printf("Symbol:\tOs\n");
            printf("Atomic Number:\t76\n");
            printf("Atomic Mass:\t190.23 g/mol\n");
            printf("Group:\t8 (Transition Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d⁶ 6s²\n");
            break;

        case 77:
            printf("Name:\tIridium\n");
            printf("Symbol:\tIr\n");
            printf("Atomic Number:\t77\n");
            printf("Atomic Mass:\t192.22 g/mol\n");
            printf("Group:\t9 (Transition Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d⁷ 6s²\n");
            break;

        case 78:
            printf("Name:\tPlatinum\n");
            printf("Symbol:\tPt\n");
            printf("Atomic Number:\t78\n");
            printf("Atomic Mass:\t195.08 g/mol\n");
            printf("Group:\t10 (Transition Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d⁹ 6s¹\n");
            break;

        case 79:
            printf("Name:\tGold\n");
            printf("Symbol:\tAu\n");
            printf("Atomic Number:\t79\n");
            printf("Atomic Mass:\t196.97 g/mol\n");
            printf("Group:\t11 (Transition Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d¹⁰ 6s¹\n");
            break;

        case 80:
            printf("Name:\tMercury\n");
            printf("Symbol:\tHg\n");
            printf("Atomic Number:\t80\n");
            printf("Atomic Mass:\t200.59 g/mol\n");
            printf("Group:\t12 (Transition Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d¹⁰ 6s²\n");
            break;

        case 81:
            printf("Name:\tThallium\n");
            printf("Symbol:\tTl\n");
            printf("Atomic Number:\t81\n");
            printf("Atomic Mass:\t204.38 g/mol\n");
            printf("Group:\t13 (Post-transition Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d¹⁰ 6s² 6p¹\n");
            break;

        case 82:
            printf("Name:\tLead\n");
            printf("Symbol:\tPb\n");
            printf("Atomic Number:\t82\n");
            printf("Atomic Mass:\t207.2 g/mol\n");
            printf("Group:\t14 (Post-transition Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d¹⁰ 6s² 6p²\n");
            break;

        case 83:
            printf("Name:\tBismuth\n");
            printf("Symbol:\tBi\n");
            printf("Atomic Number:\t83\n");
            printf("Atomic Mass:\t208.98 g/mol\n");
            printf("Group:\t15 (Post-transition Metal)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d¹⁰ 6s² 6p³\n");
            break;

        case 84:
            printf("Name:\tPolonium\n");
            printf("Symbol:\tPo\n");
            printf("Atomic Number:\t84\n");
            printf("Atomic Mass:\t209.0 g/mol\n");
            printf("Group:\t16 (Chalcogen)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d¹⁰ 6s² 6p⁴\n");
            break;

        case 85:
            printf("Name:\tAstatine\n");
            printf("Symbol:\tAt\n");
            printf("Atomic Number:\t85\n");
            printf("Atomic Mass:\t210.0 g/mol\n");
            printf("Group:\t17 (Halogen)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d¹⁰ 6s² 6p⁵\n");
            break;

        case 86:
            printf("Name:\tRadon\n");
            printf("Symbol:\tRn\n");
            printf("Atomic Number:\t86\n");
            printf("Atomic Mass:\t222.0 g/mol\n");
            printf("Group:\t18 (Noble Gas)\n");
            printf("Period:\t6\n");
            printf("Electron Configuration:\t[Xe] 4f¹⁴ 5d¹⁰ 6s² 6p⁶\n");
            break;

        case 87:
            printf("Name:\tFrancium\n");
            printf("Symbol:\tFr\n");
            printf("Atomic Number:\t87\n");
            printf("Atomic Mass:\t223.0 g/mol\n");
            printf("Group:\t1 (Alkali Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 7s¹\n");
            break;

        case 88:
            printf("Name:\tRadium\n");
            printf("Symbol:\tRa\n");
            printf("Atomic Number:\t88\n");
            printf("Atomic Mass:\t226.0 g/mol\n");
            printf("Group:\t2 (Alkaline Earth Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 7s²\n");
            break;

        case 89:
            printf("Name:\tActinium\n");
            printf("Symbol:\tAc\n");
            printf("Atomic Number:\t89\n");
            printf("Atomic Mass:\t227.0 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 6d¹ 7s²\n");
            break;

        case 90:
            printf("Name:\tThorium\n");
            printf("Symbol:\tTh\n");
            printf("Atomic Number:\t90\n");
            printf("Atomic Mass:\t232.04 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 6d² 7s²\n");
            break;

        case 91:
            printf("Name:\tProtactinium\n");
            printf("Symbol:\tPa\n");
            printf("Atomic Number:\t91\n");
            printf("Atomic Mass:\t231.04 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f² 6d¹ 7s²\n");
            break;

        case 92:
            printf("Name:\tUranium\n");
            printf("Symbol:\tU\n");
            printf("Atomic Number:\t92\n");
            printf("Atomic Mass:\t238.03 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f³ 6d¹ 7s²\n");
            break;

        case 93:
            printf("Name:\tNeptunium\n");
            printf("Symbol:\tNp\n");
            printf("Atomic Number:\t93\n");
            printf("Atomic Mass:\t237.05 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f⁴ 6d¹ 7s²\n");
            break;

        case 94:
            printf("Name:\tPlutonium\n");
            printf("Symbol:\tPu\n");
            printf("Atomic Number:\t94\n");
            printf("Atomic Mass:\t244.0 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f⁶ 7s²\n");
            break;

        case 95:
            printf("Name:\tAmericium\n");
            printf("Symbol:\tAm\n");
            printf("Atomic Number:\t95\n");
            printf("Atomic Mass:\t243.0 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f⁷ 7s²\n");
            break;

        case 96:
            printf("Name:\tCurium\n");
            printf("Symbol:\tCm\n");
            printf("Atomic Number:\t96\n");
            printf("Atomic Mass:\t247.0 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f⁷ 6d¹ 7s²\n");
            break;

        case 97:
            printf("Name:\tBerkelium\n");
            printf("Symbol:\tBk\n");
            printf("Atomic Number:\t97\n");
            printf("Atomic Mass:\t247.0 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f⁹ 7s²\n");
            break;

        case 98:
            printf("Name:\tCalifornium\n");
            printf("Symbol:\tCf\n");
            printf("Atomic Number:\t98\n");
            printf("Atomic Mass:\t251.0 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁰ 7s²\n");
            break;

        case 99:
            printf("Name:\tEinsteinium\n");
            printf("Symbol:\tEs\n");
            printf("Atomic Number:\t99\n");
            printf("Atomic Mass:\t252.0 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹¹ 7s²\n");
            break;

        case 100:
            printf("Name:\tFermium\n");
            printf("Symbol:\tFm\n");
            printf("Atomic Number:\t100\n");
            printf("Atomic Mass:\t257.0 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹² 7s²\n");
            break;

        case 101:
            printf("Name:\tMendelevium\n");
            printf("Symbol:\tMd\n");
            printf("Atomic Number:\t101\n");
            printf("Atomic Mass:\t258.0 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹³ 7s²\n");
            break;

        case 102:
            printf("Name:\tNobelium\n");
            printf("Symbol:\tNo\n");
            printf("Atomic Number:\t102\n");
            printf("Atomic Mass:\t259.0 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 7s²\n");
            break;

        case 103:
            printf("Name:\tLawrencium\n");
            printf("Symbol:\tLr\n");
            printf("Atomic Number:\t103\n");
            printf("Atomic Mass:\t262.0 g/mol\n");
            printf("Group:\t3 (Actinide)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 7s² 7p¹\n");
            break;

        case 104:
            printf("Name:\tRutherfordium\n");
            printf("Symbol:\tRf\n");
            printf("Atomic Number:\t104\n");
            printf("Atomic Mass:\t267.0 g/mol\n");
            printf("Group:\t4 (Transition Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d² 7s²\n");
            break;

        case 105:
            printf("Name:\tDubnium\n");
            printf("Symbol:\tDb\n");
            printf("Atomic Number:\t105\n");
            printf("Atomic Mass:\t268.0 g/mol\n");
            printf("Group:\t5 (Transition Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d³ 7s²\n");
            break;

        case 106:
            printf("Name:\tSeaborgium\n");
            printf("Symbol:\tSg\n");
            printf("Atomic Number:\t106\n");
            printf("Atomic Mass:\t269.0 g/mol\n");
            printf("Group:\t6 (Transition Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d⁴ 7s²\n");
            break;

        case 107:
            printf("Name:\tBohrium\n");
            printf("Symbol:\tBh\n");
            printf("Atomic Number:\t107\n");
            printf("Atomic Mass:\t270.0 g/mol\n");
            printf("Group:\t7 (Transition Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d⁵ 7s²\n");
            break;

        case 108:
            printf("Name:\tHassium\n");
            printf("Symbol:\tHs\n");
            printf("Atomic Number:\t108\n");
            printf("Atomic Mass:\t277.0 g/mol\n");
            printf("Group:\t8 (Transition Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d⁶ 7s²\n");
            break;

        case 109:
            printf("Name:\tMeitnerium\n");
            printf("Symbol:\tMt\n");
            printf("Atomic Number:\t109\n");
            printf("Atomic Mass:\t278.0 g/mol\n");
            printf("Group:\t9 (Transition Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d⁷ 7s²\n");
            break;

        case 110:
            printf("Name:\tDarmstadtium\n");
            printf("Symbol:\tDs\n");
            printf("Atomic Number:\t110\n");
            printf("Atomic Mass:\t281.0 g/mol\n");
            printf("Group:\t10 (Transition Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d⁸ 7s²\n");
            break;

        case 111:
            printf("Name:\tRoentgenium\n");
            printf("Symbol:\tRg\n");
            printf("Atomic Number:\t111\n");
            printf("Atomic Mass:\t282.0 g/mol\n");
            printf("Group:\t11 (Transition Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d⁹ 7s²\n");
            break;

        case 112:
            printf("Name:\tCopernicium\n");
            printf("Symbol:\tCn\n");
            printf("Atomic Number:\t112\n");
            printf("Atomic Mass:\t285.0 g/mol\n");
            printf("Group:\t12 (Transition Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d¹⁰ 7s²\n");
            break;

        case 113:
            printf("Name:\tNihonium\n");
            printf("Symbol:\tNh\n");
            printf("Atomic Number:\t113\n");
            printf("Atomic Mass:\t286.0 g/mol\n");
            printf("Group:\t13 (Post-transition Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d¹⁰ 7s² 7p¹\n");
            break;

        case 114:
            printf("Name:\tFlerovium\n");
            printf("Symbol:\tFl\n");
            printf("Atomic Number:\t114\n");
            printf("Atomic Mass:\t289.0 g/mol\n");
            printf("Group:\t14 (Post-transition Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d¹⁰ 7s² 7p²\n");
            break;

        case 115:
            printf("Name:\tMoscovium\n");
            printf("Symbol:\tMc\n");
            printf("Atomic Number:\t115\n");
            printf("Atomic Mass:\t290.0 g/mol\n");
            printf("Group:\t15 (Post-transition Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d¹⁰ 7s² 7p³\n");
            break;

        case 116:
            printf("Name:\tLivermorium\n");
            printf("Symbol:\tLv\n");
            printf("Atomic Number:\t116\n");
            printf("Atomic Mass:\t293.0 g/mol\n");
            printf("Group:\t16 (Post-transition Metal)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d¹⁰ 7s² 7p⁴\n");
            break;

        case 117:
            printf("Name:\tTennessine\n");
            printf("Symbol:\tTs\n");
            printf("Atomic Number:\t117\n");
            printf("Atomic Mass:\t294.0 g/mol\n");
            printf("Group:\t17 (Halogen)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d¹⁰ 7s² 7p⁵\n");
            break;

        case 118:
            printf("Name:\tOganesson\n");
            printf("Symbol:\tOg\n");
            printf("Atomic Number:\t118\n");
            printf("Atomic Mass:\t294.0 g/mol\n");
            printf("Group:\t18 (Noble Gas)\n");
            printf("Period:\t7\n");
            printf("Electron Configuration:\t[Rn] 5f¹⁴ 6d¹⁰ 7s² 7p⁶\n");
            break;

		default:
			printf("Nothing happened\n");
	}
	printf("\n");

    return;
}
