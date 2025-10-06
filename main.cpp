#include <iostream>
#include <cmath>
using namespace std;

double calcTravelTime(double dist, double speed) {
    return dist / speed;
}

double calcFuelNeeded(double dist, double efficiency) {
    return dist / efficiency;
}

double calcRefuelCost(double liters, double price) {
    return liters * price;
}

double calcMinSpeed(double dist, double max_time) {
    return dist / max_time;
}

double adjustFuelEfficiency(double base_eff, double speed) {
    double effective_eff = base_eff;
    const double SPEED_THRESHOLD = 100.0;
    const double PENALTY_FACTOR = 0.9;

    if (speed > SPEED_THRESHOLD) {
        effective_eff = base_eff * PENALTY_FACTOR;
        cout << "(Penalidade aplicada: autonomia reduzida de "
             << base_eff << " km/l para " << effective_eff << " km/l)\n";
    }
    return effective_eff;
}

int main() {
    double avg_speed;
    double base_fuel_efficiency;
    double fuel_tank;
    double refuel_amount;
    double distance;
    double travel_time;
    double refuel_cost;
    double fuel_price;

    cout << "===== SIMULAÇÃO DE VIAGEM =====\n";

    cout << "Velocidade média (km/h): ";
    cin >> avg_speed;
    cout << "Autonomia base (km/l): ";
    cin >> base_fuel_efficiency;
    cout << "Combustível atual (L): ";
    cin >> fuel_tank;
    cout << "Combustível abastecido (L): ";
    cin >> refuel_amount;
    cout << "Distância total (km): ";
    cin >> distance;
    cout << "Preço do combustível (R$/L): ";
    cin >> fuel_price;

    double effective_fuel_efficiency = adjustFuelEfficiency(base_fuel_efficiency, avg_speed);
    double total_fuel = fuel_tank + refuel_amount;
    double fuel_needed = calcFuelNeeded(distance, effective_fuel_efficiency);
    travel_time = calcTravelTime(distance, avg_speed);
    refuel_cost = calcRefuelCost(refuel_amount, fuel_price);

    cout << "\n===== RESULTADOS =====\n";

    cout << "\n[Tempo de Deslocamento]\n";
    if (travel_time <= 2.5) {
        cout << "Você consegue chegar a tempo! (" << travel_time << " h)\n";
    } else {
        double min_speed = calcMinSpeed(distance, 2.5);
        cout << "Muito lento. Para chegar em 2.5h, precisa de " << min_speed << " km/h.\n";
    }

    cout << "\n[Combustível Necessário]\n";
    cout << "Necessário: " << fuel_needed << " L\n";
    cout << "Disponível: " << total_fuel << " L\n";
    if (total_fuel >= fuel_needed) {
        cout << "Viagem possível com o combustível atual.\n";
    } else {
        cout << "Combustível insuficiente.\n";
    }

    cout << "\n[Cobertura de Combustível]\n";
    if (total_fuel >= fuel_needed) {
        cout << "O combustível cobre toda a viagem.\n";
    } else {
        cout << "É necessário abastecimento durante o percurso.\n";
    }

    cout << "\n[Paradas Estratégicas]\n";
    double autonomy_full_tank = effective_fuel_efficiency * fuel_tank;
    double autonomy_total = effective_fuel_efficiency * total_fuel;

    if (autonomy_total >= distance) {
        cout << "Nenhuma parada necessária. Autonomia total: " << autonomy_total << " km\n";
    } else {
        if (autonomy_full_tank > 0.0) {
            int stops = (int)ceil(distance / autonomy_full_tank) - 1;
            if (stops < 0) stops = 0;
            cout << "Necessário " << stops << " parada(s) para reabastecer.\n";
        } else {
            cout << "Autonomia inicial nula. Não é possível calcular paradas.\n";
        }
    }

    cout << "\n[Informações Adicionais]\n";
    cout << "Custo do abastecimento: R$ " << refuel_cost << "\n";
    cout << "Tempo estimado: " << travel_time << " h\n";
    cout << "\n==== FIM ====\n";

    return 0;
}
