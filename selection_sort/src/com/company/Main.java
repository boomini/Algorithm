package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int score[] = new int[10];
        int sort_score[] = new int[10];

        Scanner scanner = new Scanner(System.in);
        for (int i = 0; i < 10; i++) {
            score[i] = scanner.nextInt();
            sort_score[i] = score[i];
        }

        for (int i=0; i<score.length; i++){
            int max=i;
            for(int j=i; j<score.length; j++){
                if(score[max]<score[j]) max=j;
            }
            int tmp=0;
            tmp=score[max];
            score[max]=score[i];
            score[i]=tmp;
        }

        for (int i=0; i<sort_score.length; i++){
            int count=0;
            for(int j=0; j<score.length; j++) {
                if (sort_score[i] == score[j]) {
                    break;
                }
                count++;
            }
            grade(count);
        }
    }

    public static void grade(int num){
        String grade = "";
        switch(num){
            case 0 : grade= "A+";
                break;
            case 1 : grade= "A+";
                break;
            case 2 : grade = "A";
                break;
            case 3 : grade = "B+";
                break;
            case 4 : grade = "B";
                break;
            case 5 : grade = "C+";
                break;
            case 6 : grade = "C";
                break;
            case 7 : grade = "D+";
                break;
            case 8 : grade = "D";
                break;
            case 9 : grade = "F";
                break;
        }
        System.out.print(grade + " ");
    }

}
//입력 예시 : 41 31 48 97 9 65 27 29 13 15
//출력 예시 : B+ B A A+ F A+ C C+ D D+