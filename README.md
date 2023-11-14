# Automatiskt Bevattningssystem för Blommor

Det här är ett enkelt C-program för ett automatiskt bevattningssystem för blommor. Programmet övervakar markfuktighet och aktiverar vattenpumpen vid behov för att vattna blommorna.

## Innehållsförteckning

- [Krav](#krav)
- [Hårdvarukrav](#hårdvarukrav)
- [Installation](#installation)
- [Användning](#användning)
- [Bidra](#bidra)
- [Licens](#licens)

## Krav

För att använda detta program behöver du följande:

- En mikrokontroller (t.ex. Arduino, Raspberry Pi) med stöd för C-programmering.
- En markfuktighetssensor.
- En vattenpump.
- Eventuell annan nödvändig hårdvara och kretskortskomponenter.

## Hårdvarukrav

För att ansluta och konfigurera din hårdvara, se [hardware/README.md](hardware/README.md).

## Installation

1. Ladda ner projektet från GitHub.
2. Öppna projektmappen i Visual Studio Code eller din valda utvecklingsmiljö.
3. Kompilera programmet och överför det till din mikrokontroller enligt din mikrokontrollers specifika instruktioner.

## Användning

Efter installationen kan du köra programmet på din mikrokontroller. Programmet övervakar markfuktighet och vattnar blommorna vid behov.

```shell
./automatisk_bevattning
