<template>
  <div class="pdf-container">
    <div class="controls">
      <button @click="zoomOut">−</button>
      <span>{{ (scale * 100).toFixed(0) }}%</span>
      <button @click="zoomIn">+</button>
    <!--  <button @click="downloadPdf">⬇️</button> -->
    </div>

    <vue-pdf-embed
      :source="src"
      :style="{ width: '100%', height: '90vh', transform: `scale(${scale})`, transformOrigin: 'top left' }"
    />
  </div>
</template>

<script setup>
import { ref } from 'vue'
import VuePdfEmbed from 'vue-pdf-embed'

defineProps({
  src: { type: String, required: true }
})

const scale = ref(1)

function zoomIn() {
  scale.value = Math.min(scale.value + 0.1, 2)
}
function zoomOut() {
  scale.value = Math.max(scale.value - 0.1, 0.5)
}
function downloadPdf() {
  const a = document.createElement('a')
  a.href = src
  a.download = src.split('/').pop()
  a.click()
}
</script>

<style scoped>
.pdf-container {
  display: flex;
  flex-direction: column;
  align-items: center;
}
.controls {
  margin: 10px 0;
  display: flex;
  gap: 10px;
  align-items: center;
}
button {
  padding: 6px 10px;
  border: none;
  background: #2563eb;
  color: white;
  border-radius: 6px;
  cursor: pointer;
  font-size: 14px;
}
button:hover {
  background: #1e40af;
}
</style>
