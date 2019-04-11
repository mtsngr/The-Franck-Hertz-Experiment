{
    h = new TH1F("h", "; Values of Excited Energy States; Number of Excited Energies for Specific Values ", 10, 4.5, 5.5);




h->Fill(5.22);
h->Fill(5.29);

h->Fill(4.956);
h->Fill(5.03);
h->Fill(5.2);

h->Fill(4.744);
h->Fill(4.86);
h->Fill(4.9);
h->Fill(5.07);

h->Fill(4.85);
h->Fill(4.97);

h->Fill(4.653);
h->Fill(4.913);
h->Fill(4.94);
h->Fill(5.07);
h->Fill(5.16);

h->Fill(5);
h->Fill(5.1);
h->Fill(5.03);

h->Fill(4.95);
h->Fill(5.03);

h->Fill(4.67);
h->Fill(4.93);

h->Fill(4.73);
h->Fill(4.92);

h->Fill(4.66);
h->Fill(4.86);
h->Fill(4.8);

h->Fill(4.692);
h->Fill(4.85);
h->Fill(4.89);

h->Fill(4.68);
h->Fill(4.89);

h->Fill(4.641);
h->Fill(4.75);
h->Fill(4.89);
h->Fill(4.87);



h->SetFillColor(kRed+2);
h->SetMaximum(10);

gStyle->SetOptStat(111110);
gStyle->SetOptFit(1111);



h->Draw();
h->Draw("E1SAME");








}