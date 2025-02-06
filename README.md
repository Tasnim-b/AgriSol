
# 🌿 Monitoring Température & Humidité d'une Plante avec Node-RED & Arduino

## 📌 Description
Ce projet permet de suivre en temps réel la température et l'humidité optimales d'une plante grâce à un dashboard Node-RED. Les valeurs mesurées sont affichées pour une visualisation facile, et en cas d'urgence (température ou humidité hors seuil optimal).

## 🛠️ Technologies & Matériel Utilisés
- **Node-RED** : Interface graphique pour le monitoring
- **Arduino** : Microcontrôleur pour l'acquisition des données
- **Capteur DHT11** : Mesure de la température et de l'humidité
## 🚀 Fonctionnalités
✔ Acquisition des données en temps réel depuis le capteur DHT11
✔ Affichage des valeurs sur un dashboard interactif
✔ Architecture modulaire et extensible

## 📸 Aperçu du Dashboard
![Aperçu du Dashboard](https://github.com/Tasnim-b/AgriSol/blob/eb1ec1c79cff840822bbb027deacf6a15b2d07c7/dashboard_AgriSol.png)

## 📦 Installation & Exécution
1. Installer Node-RED
```
npm install -g node-red
```
2. Lancer Node-RED
```
node-red
```
3. Déployer le flow Node-RED (Ajoutez votre fichier .json)
4. Configurer et uploader le code Arduino
5. Observer les données en temps réel
